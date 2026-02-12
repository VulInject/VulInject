static void
filehist_submenu(int idx, const char *filename, int pageno, void *data)
{
Widget menu = (Widget)data;
Widget w;
static char *buf = NULL;
static size_t buf_len = 0;
size_t new_len = LENGTH_OF_INT + strlen(filename) + 1;

if (new_len > buf_len) {
buf = xrealloc(buf, new_len);
buf_len = new_len;
}

UNUSED(pageno);

sprintf(buf, "%d %s", idx + 1, filename);
TRACE_GUI((stderr, "Creating menu `%s'", buf));
w = XtVaCreateManagedWidget(buf, xmPushButtonGadgetClass, menu,

XmNuserData, menu,
NULL);
if (idx + 1 < 10) {
XtVaSetValues(w, XmNmnemonic, buf[0], NULL);
}
XtAddCallback(w, XmNactivateCallback, filehist_select_cb, cast_int_to_XtPointer(idx));
}