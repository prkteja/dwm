static const char drac_bg[] 		= "#282a36";
static const char drac_bg2[]		= "#383a59";
static const char drac_bg3[] 		= "#1e1f29";
static const char drac_sel[] 		= "#6272a4";
static const char drac_sel2[]		= "#bd93f9";
static const char drac_sel3[]		= "#6e5991";
static const char drac_fg[] 		= "#f8f8f2";
static const char drac_fg2[] 		= "#9da0c6";
static const char drac_green[]		= "#50fa7b";
static const char drac_cyan[]		= "#8be9fd";
static const char drac_yellow[]		= "#f1fa8c";
static const char drac_orange[]		= "#ffb86c";
static const char drac_red[]		= "#ff5555";
static const char drac_pink[]		= "#ff79c6";
static const char drac_grey[]		= "#44475a";

static const char *colors[][3]      = {
	/*               fg				bg         border   */
	[SchemeNorm]	= { drac_fg,		drac_bg3,	drac_sel  },
	// [SchemeSel]		= { drac_bg3,		drac_sel2,	drac_sel2 },
	[SchemeSel]		= { drac_fg,		drac_bg,	drac_sel2 },
	[SchemeUline]	= { drac_pink,		drac_bg,	drac_sel  },
	[SchemeSymbol]	= { drac_fg,		drac_bg2,	drac_sel  },
	[SchemeTitle]	= { drac_sel2,		drac_bg,	drac_sel  },
	[SchemeCol1]	= { drac_green,		drac_bg3,	drac_sel  },
	[SchemeCol2]	= { drac_yellow,	drac_bg3,	drac_sel  },
	[SchemeCol3]	= { drac_cyan,		drac_bg3,	drac_sel  },
	[SchemeCol4]	= { drac_fg2,		drac_bg3,	drac_sel  },
};
