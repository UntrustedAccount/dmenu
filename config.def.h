/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 0; /* -b  option; if 0, dmenu appears at bottom     */
/* -fn option overrides fonts[0]; default X11 font or font set */
static char font[] = "monospace:size=10";
static const char *fonts[] = {
    font,
    "Iosevka Term:size=14:style=Regular",
    "Material\\-Design\\-Iconic\\-Font:style=Design-Iconic-Font:size=16",
    "Iosevka Nerd Font Mono:size=14:style=Regular"};
static char *prompt =
    "Search:"; /* -p  option; prompt to the left of input field */

static char col_gray1[] = "#020203";
static char col_gray2[] = "#1c252c";
static char col_gray3[] = "#6b7078";
static char col_gray4[] = "#e3e6eb";
static char col_red[] = "#e05f65";
static char col_orange[] = "#f1cf8a";
static char col_green[] = "#78dba9";
static char col_cyan[] = "#74bee9";
static char col_blue[] = "#70a5eb";
static char col_purple[] = "#c68aee";

static char *colors[SchemeLast][2] = {
    /*     fg         bg       */
    [SchemePrompt] = {col_gray1, col_blue},
    [SchemeNorm] = {col_gray3, col_gray1},
    [SchemeSel] = {col_blue, col_gray1},
    [SchemeOut] = {col_gray1, col_blue},
};
/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines = 0;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";

/*
 * Xresources preferences to load at startup
 */
ResourcePref resources[] = {
    {"font", STRING, &font},
    {"color0", STRING, &col_gray1},
    {"color8", STRING, &col_gray3},
    {"color4", STRING, &col_blue},
};
