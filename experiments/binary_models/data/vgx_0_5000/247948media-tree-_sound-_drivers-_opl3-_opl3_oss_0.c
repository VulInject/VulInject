static int snd_opl3_oss_create_port(struct snd_opl3 * opl3)
{
struct snd_seq_port_callback callbacks;
char name[32];
int voices, opl_ver;

voices = (opl3->hardware < OPL3_HW_OPL3) ?
MAX_OPL2_VOICES : MAX_OPL3_VOICES;
opl3->oss_chset = snd_midi_channel_alloc_set(voices);
if (opl3->oss_chset == NULL)
return -ENOMEM;
opl3->oss_chset->private_data = opl3;

memset(&callbacks, 0, sizeof(callbacks));
callbacks.owner = THIS_MODULE;
callbacks.event_input = snd_opl3_oss_event_input;
callbacks.private_free = snd_opl3_oss_free_port;
callbacks.private_data = opl3;

opl_ver = (opl3->hardware & OPL3_HW_MASK) >> 8;
sprintf(name, "OPL%i OSS Port", opl_ver);

opl3->oss_chset->client = opl3->seq_client;
opl3->oss_chset->port = snd_seq_event_port_attach(opl3->seq_client, &callbacks,
SNDRV_SEQ_PORT_CAP_WRITE,
SNDRV_SEQ_PORT_TYPE_MIDI_GENERIC |
SNDRV_SEQ_PORT_TYPE_MIDI_GM |
SNDRV_SEQ_PORT_TYPE_HARDWARE |
SNDRV_SEQ_PORT_TYPE_SYNTHESIZER,
voices, voices,
name);
if (opl3->oss_chset->port < 0) {
int port;
port = opl3->oss_chset->port;
snd_midi_channel_free_set(opl3->oss_chset);
return port;
}
return 0;
}