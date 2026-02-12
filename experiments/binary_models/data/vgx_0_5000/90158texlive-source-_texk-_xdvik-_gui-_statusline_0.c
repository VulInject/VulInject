void
statusline_append(statusTimerT timeout, const char *pattern, const char *fmt, ...)
{
const char *buf = NULL;
va_list argp;

if (XtIsRealized(globals.widgets.top_level) && initialized && (resource.expert_mode & XPRT_SHOW_STATUSLINE) != 0) {

XtVaGetValues(statusline, XmNvalue, &buf, NULL);
XtVaGetValues(statusline, XtNlabel, &buf, NULL);
}

while (buf != NULL && isspace((int)*buf)) 
buf++;
va_start(argp, fmt);

if (buf != NULL && memcmp(buf, pattern, strlen(pattern)) == 0) {
buf = NULL;
}
internal_print_statusline(false, timeout, buf, fmt, argp);
va_end(argp);
}