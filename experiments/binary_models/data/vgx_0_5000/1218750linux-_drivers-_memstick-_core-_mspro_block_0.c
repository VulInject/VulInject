static int mspro_block_issue_req(struct memstick_dev *card)
{
struct mspro_block_data *msb = memstick_get_drvdata(card);
u64 t_off;
unsigned int count;

while (true) {
msb->current_page = 0;
msb->current_seg = 0;
msb->seg_count = blk_rq_map_sg(msb->block_req->q,
msb->block_req,
msb->req_sg);

if (!msb->seg_count) {
unsigned int bytes = blk_rq_cur_bytes(msb->block_req);
bool chunk;

chunk = blk_update_request(msb->block_req,
BLK_STS_RESOURCE,
bytes);
if (chunk)
continue;
__blk_mq_end_request(msb->block_req,
BLK_STS_RESOURCE);
msb->block_req = NULL;
return -EAGAIN;
}

t_off = blk_rq_pos(msb->block_req);
t_off <<= 9;
count = blk_rq_bytes(msb->block_req);

msb->setup_transfer(card, t_off, count);

msb->data_dir = rq_data_dir(msb->block_req);
msb->transfer_cmd = msb->data_dir == READ
? MSPRO_CMD_READ_DATA
: MSPRO_CMD_WRITE_DATA;

memstick_new_req(card->host);
return 0;
}
}