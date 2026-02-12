gimp_template_editor_precision_changed (GtkWidget          *widget,
GimpTemplateEditor *editor)
{
GimpTemplateEditorPrivate *private = GET_PRIVATE (editor);
GimpComponentType          component_type;
GimpTRCType                trc;

gimp_int_combo_box_get_active (GIMP_INT_COMBO_BOX (widget),
(gint *) &component_type);

g_object_get (private->template,
"trc", &trc,
NULL);

trc = gimp_suggest_trc_for_component_type (component_type, trc);

g_object_set (private->template,
"component-type", component_type,
"trc",            trc,
NULL);
}