
static GimpStackTraceMode  _stack_trace_mode   = GIMP_STACK_TRACE_NEVER;

static guint               _gimp_debug_flags   = 0;



void
_gimp_debug_init (const gchar *basename)
{
const gchar *env_string = g_getenv ("GIMP_PLUGIN_DEBUG");
const gchar *debug_options;
gint         plugin_name_len;
gboolean     is_debug_name_match_basename;

if (!env_string) return;

debug_options = strchr (env_string, ',');



plugin_name_len = debug_options - env_string;
is_debug_name_match_basename = (
((strlen (basename) == plugin_name_len) &&
(strncmp (basename, env_string, plugin_name_len) == 0)) ||
(strncmp (env_string, "all", plugin_name_len) == 0)
);


if (is_debug_name_match_basename && debug_options)
{
_gimp_debug_flags =
g_parse_debug_string (debug_options + 1,
gimp_debug_keys,
G_N_ELEMENTS (gimp_debug_keys));
}


make_visible_libgimp_messages();
}