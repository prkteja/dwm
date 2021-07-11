static const char tn_bg[] 		= "#24283b";
static const char tn_bg2[] 		= "#1a1b26";
static const char tn_blue[] 	= "#7dcfff";
static const char tn_blue2[] 	= "#7aa2f7";
static const char tn_purple[]	= "#bb9af7";
static const char tn_orange[]	= "#ff9e64";
static const char tn_fg[] 		= "#c0caf5";
static const char tn_green[]	= "#9ece6a";
static const char tn_cyan[]		= "#73daca";
static const char tn_grey[]		= "#565f89";

static const char *colors[][3]      = {
	/*               fg         bg         border   */
	[SchemeNorm] = { tn_fg,   tn_bg,	tn_grey  },
	[SchemeSel]  = { tn_bg2,  tn_blue2,	tn_blue2  },
};
