// (C) 2013-2014, Sergei Zaychenko, KNURE, Kharkiv, Ukraine

/*****************************************************************************/

#include "testslib.hpp"

#include "rgbcolor.hpp"

/*****************************************************************************/


DECLARE_OOP_TEST( rgb_test_simple_constructor )
{
	RGBColor c1( 10, 20, 30 );
	assert( c1.getRed() == 10 );
	assert( c1.getGreen() == 20 );
	assert( c1.getBlue() == 30 );
	assert( c1.getPackedRGB() == 0x0A141E );

	RGBColor c2( 0, 0, 0 );
	assert( c2.getRed() == 0 );
	assert( c2.getGreen() == 0 );
	assert( c2.getBlue() == 0 );
	assert( c2.getPackedRGB() == 0x0 );

	RGBColor c3( 255, 255, 255 );
	assert( c3.getRed() == 255 );
	assert( c3.getGreen() == 255 );
	assert( c3.getBlue() == 255 );
	assert( c3.getPackedRGB() == 0xFFFFFF );
}


/*****************************************************************************/


DECLARE_OOP_TEST( rgb_test_packed_constructor )
{
	RGBColor c1( 0x0A141E );
	assert( c1.getRed() == 10 );
	assert( c1.getGreen() == 20 );
	assert( c1.getBlue() == 30 );
	assert( c1.getPackedRGB() == 0x0A141E );

	RGBColor c2( 0 );
	assert( c2.getRed() == 0 );
	assert( c2.getGreen() == 0 );
	assert( c2.getBlue() == 0 );
	assert( c2.getPackedRGB() == 0x0 );

	RGBColor c3( 0xFFFFFF );
	assert( c3.getRed() == 0xFF );
	assert( c3.getGreen() == 0xFF );
	assert( c3.getBlue() == 0xFF );
	assert( c3.getPackedRGB() == 0xFFFFFF );
}


/*****************************************************************************/


DECLARE_OOP_TEST( rgb_test_color_via_constructor )
{
	RGBColor c1( 10, 20, 30, "MyColor" );
	assert( ! strcmp( c1.getColorName(), "MyColor" ) );

	RGBColor c2( 0xFF00FF, "MyColor2" );
	assert( ! strcmp( c2.getColorName(), "MyColor2" ) );
}


/*****************************************************************************/


DECLARE_OOP_TEST( rgb_test_color_after_update )
{
	RGBColor c0( 1, 2, 3 );
	assert( ! c0.getColorName() );

	RGBColor c1( 10, 20, 30, "MyColor" );
	c1.setColorName( "ChangedMyMind" );
	assert( ! strcmp( c1.getColorName(), "ChangedMyMind" ) );

	RGBColor c2( 0xFF00FF );
	c2.setColorName( "DecidedOnColor" );
	assert( ! strcmp( c2.getColorName(), "DecidedOnColor" ) );
}


/*****************************************************************************/


DECLARE_OOP_TEST( rgb_test_color_equality_inequality )
{
	RGBColor c0( 0, 0, 0, "Black" );
	RGBColor c1( 0, 0, 0, "Black" );
	RGBColor c2( 0, 0, 0, "SomeColor" );

	assert( c0 == c1 && c1 == c2 && c0 == c2 );
	assert( !( c0 != c1 ) && !( c1 != c2 ) && !( c0 != c2 ) );

	RGBColor c3( 1, 0, 0, "Black" );
	assert( !( c0 == c3 ) );
	assert( c0 != c3 );

	RGBColor c4( 0, 1, 0, "Black" );
	assert( !( c0 == c4 ) );
	assert( c0 != c4 );

	RGBColor c5( 0, 0, 1, "Black" );
	assert( !( c0 == c5 ) );
	assert( c0 != c5 );
}


/*****************************************************************************/


DECLARE_OOP_TEST( rgb_test_color_addition )
{
	RGBColor c1( 1, 2, 3 );
	RGBColor c2( 3, 2, 1 );
	RGBColor c3 = c1 + c2;
	assert( c3.getPackedRGB() == 0x040404 );

	c3 += c1;
	assert( c3.getPackedRGB() == 0x050607 );
}


/*****************************************************************************/


DECLARE_OOP_TEST( rgb_test_color_negative )
{
	RGBColor c1( 1, 2, 3 );
	assert( c1.getNegativeColor().getPackedRGB() == 0xFEFDFC );

	RGBColor c2( 0, 0, 0 );
	assert( c2.getNegativeColor().getPackedRGB() == 0xFFFFFF );

	RGBColor c3( 255, 255, 255 );
	assert( c3.getNegativeColor().getPackedRGB() == 0 );
}


/*****************************************************************************/


DECLARE_OOP_TEST( rgb_test_predefined_colors )
{
	assert( RGBColor::findPredefinedColor( "Black" )  == & RGBColor::BLACK  );
	assert( RGBColor::findPredefinedColor( "White" )  == & RGBColor::WHITE  );
	assert( RGBColor::findPredefinedColor( "Gray" )   == & RGBColor::GRAY   );
	assert( RGBColor::findPredefinedColor( "Red" )    == & RGBColor::RED    );
	assert( RGBColor::findPredefinedColor( "Green" )  == & RGBColor::GREEN  );
	assert( RGBColor::findPredefinedColor( "Blue" )   == & RGBColor::BLUE   );
	assert( RGBColor::findPredefinedColor( "Yellow" ) == & RGBColor::YELLOW );
	assert( RGBColor::findPredefinedColor( "Orange" ) == & RGBColor::ORANGE );
	assert( RGBColor::findPredefinedColor( "Pink" )   == & RGBColor::PINK   );
}



/*****************************************************************************/



DECLARE_OOP_TEST( rgb_test_predefined_colors_not_existing )
{
	assert( RGBColor::findPredefinedColor( "BLACK" )  == nullptr );
	assert( RGBColor::findPredefinedColor( "Dummy" )  == nullptr );
}



/*****************************************************************************/
