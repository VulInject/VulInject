static void knc_sync(struct thr_info *thr)
{
struct cgpu_info *cgpu = thr->cgpu;
struct knc_state *knc = cgpu->device_data;
struct knc_spi_buffer *buffer = &knc->spi_buffer[knc->send_buffer];
int sent = 0;
pthread_mutex_lock(&knc->spi_qlock);
if (buffer->state == KNC_SPI_IDLE && buffer->size > 0) {
buffer->state = KNC_SPI_PENDING;
pthread_cond_signal(&knc->spi_qcond);
knc->send_buffer += 1;
knc->send_buffer_count += 1;
if (knc->send_buffer >= KNC_SPI_BUFFERS)
knc->send_buffer = 0;
sent = 1;
}
int prev_buffer = knc->send_buffer - 1;
if (prev_buffer < 0)
prev_buffer = KNC_SPI_BUFFERS - 1;
buffer = &knc->spi_buffer[prev_buffer];
while (buffer->state == KNC_SPI_PENDING)
pthread_cond_wait(&knc->spi_qcond, &knc->spi_qlock);
pthread_mutex_unlock(&knc->spi_qlock);

int pending = knc->send_buffer - knc->read_buffer;
if (pending <= 0)
pending += KNC_SPI_BUFFERS;
pending -= 1 - sent;
applog(LOG_INFO, "KnC: sync %d pending buffers", pending);
knc_process_responses(thr);
}