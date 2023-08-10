/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1;                      /* -b  option; if 0, dmenu appears at bottom     */
static int fuzzy = 1;                      /* -F  option; if 0, dmenu doesn't use fuzzy matching     */
static int restrict_return = 1;				/* -r option; if 1, disables shift-return and ctrl-return */
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
	"LXGW WenKai Mono:style=Bold:size=11"
};
static const char *prompt      = NULL;      /* -p  option; prompt to the left of input field */
static const char *colors[SchemeLast][2] = {
	/*     fg         bg       */
	[SchemeNorm] = { "#a2a8a8", "#16252c" },
	[SchemeSel] = { "#16252c", "#da692d" },
	[SchemeSelHighlight] = { "#973739", "#da692d" },
	[SchemeNormHighlight] = { "#973739", "#16252c" },
	[SchemeOut] = { "#973739", "#16252c" },
	[SchemeOutHighlight] = { "#973739", "#16252c" },
};
/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines      = 0;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";
