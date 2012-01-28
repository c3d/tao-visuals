/**
 * @~english
 * @taomoduledescription{TaoVisuals, Tao Visuals}
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
 * @include tao_visuals.ddd
 *
 * Here is a screen capture of this document:
 * @image html "tao_visuals.png" "Output from tao_visuals.ddd"
 *
 * @endtaomoduledescription{TaoVisuals}
 *
 * @~french
 * @taomoduledescription{TaoVisuals, Visuels Tao}
 *
 * Éléments graphique relatifs à Taodyne et Tao Presentations.
 *
 * TaoVisuals regroupe des éléments graphiques tels que des images et des
 * définitions de couleurs.
 *
 * Le module fournit des fonctions prêtes à l'emploi comme
 * @ref tv_taodyne_logo. Les logos sont configurables : ils sont fournis en
 * plusieurs versions et vous pouvez choisir d'afficher ou non un slogan, et
 * également dans quelle langue (français ou anglais).
 *
 * Voici un exemple :
 * @include tao_visuals.ddd
 *
 * @image html "tao_visuals.png" "Visuels Tao"
 *
 * @endtaomoduledescription{TaoVisuals}
 * @{
 */


//
// Variables
//


/**
 * @~english
 * Preferred language.
 * Possible values are:
 *  @li @c "en" English
 *  @li @c "fr" French
 * @~french
 * Langue à utiliser.
 * Les valeurs possibles sont :
 *  @li @c "en" Anglais
 *  @li @c "fr" Français
 */
text tv_language = "en";

/**
 * @~english
 * Choose the tagline under the Taodyne logo.
 * Possible values are:
 *   @li @c "geeks" Presentation Software for Geeks (always in english)
 *   @li @c "dev"   Develop your ideas
 *   @li @c "none"  No tagline
 * @~french
 * Choisit le slogan sous le logo Taodyne.
 * Les valeurs possibles sont :
 *   @li @c "geeks" Presentation Software for Geeks (toujours en anglais)
 *   @li @c "dev"   Développez vos idées
 *   @li @c "none"  Aucun slogan
 * @~
 * @see tv_language
 */
text tv_tagline = "geeks";


//
// Forms
//


/**
 * @~english
 * Draws the Taodyne logo centered at the origin.
 * The logo is 400 pixels wide by 200 pixels high.
 * @~french
 * Affiche le logo Taodyne au centre de l'écran.
 * Le logo mesure 400 x 200 pixels.
 */
tv_taodyne_logo();

/**
 * @~english
 * Draws and translates the Taodyne logo.
 * The logo is centered at (@a x, @a y). It is 400 pixels wide by 200 pixels
 * high.
 * @~french
 * Affiche le logo Taodyne à une position donnée.
 * Le logo est centré en (@p x, @p y). Il mesure 400 x 200 pixels.
 */
tv_taodyne_logo(real x, real y);

/**
 * @~english
 * Draws, scales and translates the Taodyne logo.
 * The logo is centered at (@a x, @a y) and scaled to fit in a rectangle
 * of size (@a width x @a height).
 * @~french
 * Affiche le logo Taodyne à une position donnée et avec une taille donnée.
 * Le logo est centré en (@p x, @p y) et mesure @p width x @p height pixels.
 */
tv_taodyne_logo(real x, real y, real width, real height);


// Tao logo color palette

/**
 * @~english
 * Sets the current color to be Tao red (RGB #AA0022).
 * @~french
 * Choisit la couleur de remplissage rouge Tao (RVB #AA0022).
 */
color("tao_red");

/**
 * @~english
 * Sets the current color to be Tao orange (RGB #DD3311).
 * @~french
 * Choisit la couleur de remplissage orange Tao (RVB #DD3311).
 */
color("tao_orange");

/**
 * @~english
 * Sets the current color to be Tao yellow (RGB #EEAA11).
 * @~french
 * Choisit la couleur de remplissage jaune Tao (RVB #EEAA11).
 */
color("tao_yellow");

/**
 * @~english
 * Sets the current color to be Tao green (RGB #88BB00).
 * @~french
 * Choisit la couleur de remplissage vert Tao (RVB #88BB00).
 */
color("tao_green");

/**
 * @~english
 * Sets the current color to be Tao sea green (RGB #229988).
 * @~french
 * Choisit la couleur de remplissage bleu-vert Tao (RVB #229988).
 */
color("tao_sea");

/**
 * @~english
 * Sets the current color to be Tao light blue (RGB #3399FF).
 * @~french
 * Choisit la couleur de remplissage bleu clair Tao (RVB #3399FF).
 */
color("tao_light_blue");

/**
 * @~english
 * Sets the current color to be Tao dark blue (RGB #003366).
 * @~french
 * Choisit la couleur de remplissage bleu foncé Tao (RVB #003366).
 */
color("tao_dark_blue");

/**
 * @~english
 * Sets the current color to be Tao magenta (RGB #CC0099).
 * @~french
 * Choisit la couleur de remplissage magenta Tao (RVB #CC0099).
 */
color("tao_magenta");

/**
 * @~english
 * Sets the current line color to be Tao red (RGB #AA0022).
 * @~french
 * Choisit la couleur de ligne rouge Tao (RVB #AA0022).
 */
line_color("tao_red");

/**
 * @~english
 * Sets the current line color to be Tao orange (RGB #DD3311).
 * @~french
 * Choisit la couleur de ligne orange Tao (RVB #DD3311).
 */
line_color("tao_orange");

/**
 * @~english
 * Sets the current line color to be Tao yellow (RGB #EEAA11).
 * @~french
 * Choisit la couleur de ligne jaune Tao (RVB #EEAA11).
 */
line_color("tao_yellow");

/**
 * @~english
 * Sets the current line color to be Tao green (RGB #88BB00).
 * @~french
 * Choisit la couleur de ligne vert Tao (RVB #88BB00).
 */
line_color("tao_green");

/**
 * @~english
 * Sets the current line color to be Tao sea green (RGB #229988).
 * @~french
 * Choisit la couleur de ligne bleu-vert Tao (RVB #229988).
 */
line_color("tao_sea");

/**
 * @~english
 * Sets the current line color to be Tao light blue (RGB #3399FF).
 * @~french
 * Choisit la couleur de ligne bleu clair Tao (RVB #3399FF).
 */
line_color("tao_light_blue");

/**
 * @~english
 * Sets the current line color to be Tao dark blue (RGB #003366).
 * @~french
 * Choisit la couleur de ligne bleu foncé Tao (RVB #003366).
 */
line_color("tao_dark_blue");

/**
 * @~english
 * Sets the current line color to be Tao magenta (RGB #CC0099).
 * @~french
 * Choisit la couleur de ligne magenta Tao (RVB #CC0099).
 */
line_color("tao_magenta");

/**
 * @}
 */
