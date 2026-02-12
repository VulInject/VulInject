void
ui_room_kicked(const char* const roomjid, const char* const actor, const char* const reason)
{
ProfWin* window = (ProfWin*)wins_get_muc(roomjid);
GList* privwins = wins_get_private_chats(roomjid);
if (window == NULL) {
log_error("Received kick, but no window open for %s.", roomjid);
} else {
int num = wins_get_num(window);
ui_close_win(num);

GString* message = g_string_new("Kicked from ");
g_string_append(message, roomjid);
if (actor) {
g_string_append(message, " by ");
g_string_append(message, actor);
}
if (reason) {
g_string_append(message, ", reason: ");
g_string_append(message, reason);
}

ProfWin* console = wins_get_console();
win_println(console, THEME_TYPING, "!", "<- %s", message->str);
g_string_free(message, TRUE);
}

GList* curr = privwins;
while (curr) {
ProfPrivateWin* privwin = curr->data;
privwin_room_kicked(privwin, actor, reason);
curr = g_list_next(curr);
}
g_list_free(privwins);
}