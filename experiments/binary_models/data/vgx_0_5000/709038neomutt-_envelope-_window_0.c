static int env_window_observer(struct NotifyCallback *nc)
{
if (nc->event_type != NT_WINDOW)
return 0;
if (!nc->global_data || !nc->event_data)
return -1;

struct MuttWindow *win_env = nc->global_data;
struct EventWindow *ev_w = nc->event_data;
if (ev_w->win != win_env)
return 0;

if (nc->event_subtype == NT_WINDOW_STATE)
{
win_env->actions |= WA_RECALC;
mutt_debug(LL_DEBUG5, "window state done, request WA_RECALC\n");
}
else if (nc->event_subtype == NT_WINDOW_DELETE)
{
struct EnvelopeWindowData *wdata = win_env->wdata;

notify_observer_remove(NeoMutt->notify, env_color_observer, win_env);
notify_observer_remove(wdata->email->notify, env_email_observer, win_env);
notify_observer_remove(NeoMutt->notify, env_config_observer, win_env);
notify_observer_remove(NeoMutt->notify, env_header_observer, win_env);
notify_observer_remove(win_env->notify, env_window_observer, win_env);
mutt_debug(LL_DEBUG5, "window delete done\n");
}

return 0;
}