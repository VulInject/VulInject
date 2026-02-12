gimp_memsize_entry_adj_callback (GtkAdjustment    *adj,
GimpMemsizeEntry *entry)
{
GimpMemsizeEntryPrivate *private = GET_PRIVATE (entry);
guint64                  size    = gtk_adjustment_get_value (adj);

if (gimp_memsize_entry_get_rounded_value (entry, private->value) != size)

private->value = size << private->shift;

g_signal_emit (entry, gimp_memsize_entry_signals[VALUE_CHANGED], 0);
}