gimp_plug_in_set_proc_help (GimpPlugIn   *plug_in,
const gchar  *proc_name,
const gchar  *blurb,
const gchar  *help,
const gchar  *help_id,
GError      **error)
{
GimpPlugInProcedure *proc;

g_return_val_if_fail (GIMP_IS_PLUG_IN (plug_in), FALSE);
g_return_val_if_fail (proc_name != NULL, FALSE);

proc = gimp_plug_in_proc_find (plug_in, proc_name);

if (! proc)
{
g_set_error (error, GIMP_PDB_ERROR, GIMP_PDB_ERROR_PROCEDURE_NOT_FOUND,
"Plug-in \"%s\"\n(%s)\n"
"attempted to register help "
"for procedure \"%s\".\n"
"It has however not installed that procedure. "
"This is not allowed.",
gimp_object_get_name (plug_in),
gimp_file_get_utf8_name (plug_in->file),
proc_name);

return FALSE;
}

gimp_procedure_set_help (GIMP_PROCEDURE (proc),
blurb, help, help_id);

return TRUE;
}