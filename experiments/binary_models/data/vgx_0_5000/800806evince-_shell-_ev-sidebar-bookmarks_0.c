ev_sidebar_bookmarks_bookmark_renamed (GtkCellRendererText *renderer,
const gchar         *path_string,
const gchar         *new_text,
EvSidebarBookmarks  *sidebar_bookmarks)
{
EvSidebarBookmarksPrivate *priv = sidebar_bookmarks->priv;
GtkTreePath               *path = gtk_tree_path_new_from_string (path_string);
GtkTreeModel              *model;
GtkTreeIter                iter;
guint                      page;
EvBookmark                 bm;

if (!new_text || new_text[0] == '\0')
return;

model = gtk_tree_view_get_model (GTK_TREE_VIEW (priv->tree_view));
gtk_tree_model_get_iter (model, &iter, path);
gtk_tree_model_get (model, &iter,
COLUMN_PAGE, &page,
-1);
gtk_tree_path_free (path);

bm.page = page;
bm.title = g_markup_escape_text (new_text, -1);
ev_bookmarks_update (priv->bookmarks, &bm);
}