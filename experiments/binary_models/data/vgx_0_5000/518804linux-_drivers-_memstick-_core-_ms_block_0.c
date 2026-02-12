static int msb_read_int_reg(struct msb_data *msb, long timeout)
{
struct memstick_request *mrq = &msb->card->current_mrq;

WARN_ON(msb->state == -1);

if (!msb->int_polling) {
msb->int_timeout = jiffies +
msecs_to_jiffies(timeout == -1 ? 500 : timeout);
msb->int_polling = true;
} else if (time_after(jiffies, msb->int_timeout)) {
mrq->data[0] = MEMSTICK_INT_CMDNAK;
return 0;
}

if ((msb->caps & MEMSTICK_CAP_AUTO_GET_INT) &&
mrq->need_card_int && !mrq->error) {
mrq->data[0] = mrq->int_reg;
mrq->need_card_int = false;
return 0;
} else {
memstick_init_req(mrq, MS_TPC_GET_INT, NULL, 1);
return 1;
}
}