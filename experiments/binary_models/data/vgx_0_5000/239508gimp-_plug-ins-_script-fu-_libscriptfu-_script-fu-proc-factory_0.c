script_fu_add_menu_to_procedure (GimpProcedure *procedure,
SFScript      *script)
{
GList    *menu_list;
gboolean  did_add_menu = FALSE;

menu_list = script_fu_get_menu_list ();



for (GList * traverser = menu_list; traverser; traverser = g_list_next (traverser))
{
SFMenu *menu = traverser->data;
if (menu->script == script)
{
g_debug ("Add menu: %s", menu->menu_path);
gimp_procedure_add_menu_path (procedure, menu->menu_path);
did_add_menu = TRUE;
break;
}
}


if ( ! did_add_menu )
{

g_debug ("No menu paths! Does the procedure name in script-fu-menu-register match?");

}

}
