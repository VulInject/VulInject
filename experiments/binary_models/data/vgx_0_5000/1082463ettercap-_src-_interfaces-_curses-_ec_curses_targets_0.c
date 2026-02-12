static void add_target2(void);
static void curses_target_help(void);



static wdg_t *wdg_comp;
static wdg_t *wdg_t1, *wdg_t2;
static struct wdg_list *wdg_t1_elm, *wdg_t2_elm;
static char thost[MAX_ASCII_ADDR_LEN];
static char tag_reverse[] = " ";

struct wdg_menu menu_targets[] = { {"Targets",          'T',       "",    NULL},
{"Current Targets",  't',       "t",   curses_current_targets},
{"Select TARGET(s)", CTRL('T'), "C-t", curses_select_targets},
{"-",                0,         "",    NULL},
{"Protocol...",      'p',       "p",    curses_select_protocol},
{"Reverse matching", 0,   tag_reverse, toggle_reverse},
{"-",                0,         "",    NULL},
{"Wipe targets",     'W',       "W",    wipe_targets},
{NULL, 0, NULL, NULL},
};




static void toggle_reverse(void)
{
if (EC_GBL_OPTIONS->reversed) {
tag_reverse[0] = ' ';
EC_GBL_OPTIONS->reversed = 0;
} else {
tag_reverse[0] = '*';
EC_GBL_OPTIONS->reversed = 1;
}
}