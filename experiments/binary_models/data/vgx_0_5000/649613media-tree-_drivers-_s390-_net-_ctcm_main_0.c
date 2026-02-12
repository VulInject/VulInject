static struct channel *channel_get(enum ctcm_channel_types type,
char *id, int direction)
{
struct channel *ch = channels;

while (ch && (strncmp(ch->id, id, CTCM_ID_SIZE) || (ch->type != type)))
ch = ch->next;
if (!ch) {
CTCM_DBF_TEXT_(ERROR, CTC_DBF_ERROR,
"%s(%d, %s, %d) not found in channel list\n",
CTCM_FUNTAIL, type, id, direction);
} else {
if (ch->flags & CHANNEL_FLAGS_INUSE)
ch = NULL;
else {
ch->flags |= CHANNEL_FLAGS_INUSE;
ch->flags &= ~CHANNEL_FLAGS_RWMASK;
ch->flags |= (direction == CTCM_WRITE)
? CHANNEL_FLAGS_WRITE : CHANNEL_FLAGS_READ;
fsm_newstate(ch->fsm, CTC_STATE_STOPPED);
}
}
return ch;
}