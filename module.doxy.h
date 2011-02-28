/*
 * This file duplicates module.xl for documentation purposes.
 */

/**
 * @defgroup TaoVisuals Tao Visuals
 * @ingroup Modules
 *
 * Graphical elements related to Taodyne and Tao Presentations.
 *
 * TaoVisuals is a collection of graphic elements related to Tao Presentations
 * and Taodyne. It contains pictures and color definitions.
 *
 * The module provides ready to use Tao functions, such as
 * @ref tv_taodyne_logo. Logos are configurable: they are provided in several
 * versions, so you can choose whether you want to show the tagline or not, and
 * also in which language to display the logo (english or french).
 *
 * Here is an example:
 @verbatim
// taovisuals.ddd

import TaoVisuals "0.1"

tv_taodyne_logo 0, 80, 200, 100
tv_language := "fr"
tv_tagline := "dev"
tv_taodyne_logo 0, -80, 200, 100

W := 25
color "tao_red"
X := -80
rectangle X, 0, W, 20
color "tao_orange"
X += W
rectangle X, 0, W, 20
color "tao_yellow"
X += W
rectangle X, 0, W, 20
color "tao_green"
X += W
rectangle X, 0, W, 20
color "tao_sea"
X += W
rectangle X, 0, W, 20
color "tao_light_blue"
X += W
rectangle X, 0, W, 20
color "tao_dark_blue"
X += W
rectangle X, 0, W, 20
color "tao_magenta"
X += W
rectangle X, 0, W, 20
 @endverbatim
 *
 * Here is a screen capture of this document:
 * @image html "taovisuals.png" "Output from taovisuals.ddd"
 * @{
 */


//
// Variables
//


/**
 * Preferred language.
 * Possible values are:
 *  @li @c "en" English
 *  @li @c "fr" French
 */
text tv_language = "en";

/**
 * Choose the tagline under the Taodyne logo.
 * Possible values are:
 *   @li @c "geeks" Presentation Software for Geeks
 *   @li @c "dev"   Develop your ideas
 *   @li @c "none"  No tagline
 */
text tv_tagline = "geeks";


//
// Forms
//


/**
 * Draws the Taodyne logo centered at the origin.
 */
tv_taodyne_logo();

/**
 * Draws and translates the Taodyne logo.
 * The logo is centered at (@a x, @a y). It is 400 pixels wide by 200 pixels
 * high.
 */
tv_taodyne_logo(real x, real y);

/**
 * Draws, scales and translates the Taodyne logo.
 * The logo is centered at (@a x, @a y) and scaled to fit in a rectangle
 * of size (@a width x @a height).
 */
tv_taodyne_logo(real x, real y, real width, real height);


// Tao logo color palette

/**
 * Sets the current color to be Tao red (RGB #AA0022).
 */
color("tao_red");

/**
 * Sets the current color to be Tao orange (RGB #DD3311).
 */
color("tao_orange");

/**
 * Sets the current color to be Tao yellow (RGB #EEAA11).
 */
color("tao_yellow");

/**
 * Sets the current color to be Tao green (RGB #88BB00).
 */
color("tao_green");

/**
 * Sets the current color to be Tao sea green (RGB #229988).
 */
color("tao_sea");

/**
 * Sets the current color to be Tao light blue (RGB #3399FF).
 */
color("tao_light_blue");

/**
 * Sets the current color to be Tao dark blue (RGB #003366).
 */
color("tao_dark_blue");

/**
 * Sets the current color to be Tao magenta (RGB #CC0099).
 */
color("tao_magenta");

/**
 * Sets the current line color to be Tao red (RGB #AA0022).
 */
line_color("tao_red");

/**
 * Sets the current line color to be Tao orange (RGB #DD3311).
 */
line_color("tao_orange");

/**
 * Sets the current line color to be Tao yellow (RGB #EEAA11).
 */
line_color("tao_yellow");

/**
 * Sets the current line color to be Tao green (RGB #88BB00).
 */
line_color("tao_green");

/**
 * Sets the current line color to be Tao sea green (RGB #229988).
 */
line_color("tao_sea");

/**
 * Sets the current line color to be Tao light blue (RGB #3399FF).
 */
line_color("tao_light_blue");

/**
 * Sets the current line color to be Tao dark blue (RGB #003366).
 */
line_color("tao_dark_blue");

/**
 * Sets the current line color to be Tao magenta (RGB #CC0099).
 */
line_color("tao_magenta");

/**
 * @}
 */
