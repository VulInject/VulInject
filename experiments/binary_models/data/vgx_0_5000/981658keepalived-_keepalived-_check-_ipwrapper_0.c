static void
notify_fifo_vs(virtual_server_t *vs)
{
const char *state = vs->quorum_state_up ? "UP" : "DOWN";
size_t size;
char *line;
const char *vs_str;

if (global_data->notify_fifo.fd == -1 &&
global_data->lvs_notify_fifo.fd == -1)
return;

vs_str = FMT_VS(vs);
size = strlen(vs_str) + strlen(state) + 5;
line = MALLOC(size + 1);
if (!line)
return;

snprintf(line, size + 1, "VS %s %s\n", vs_str, state);

if (global_data->notify_fifo.fd != -1)
if (write(global_data->notify_fifo.fd, line, size) == -1) {  }

if (global_data->lvs_notify_fifo.fd != -1)
if (write(global_data->lvs_notify_fifo.fd, line, size) == -1) {  }

FREE(line);
}