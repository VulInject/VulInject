static void blk_complete_request(struct request *req)
{
const bool is_flush = (req->rq_flags & RQF_FLUSH_SEQ) != 0;
int total_bytes = blk_rq_bytes(req);
struct bio *bio = req->bio;

trace_block_rq_complete(req, BLK_STS_OK, total_bytes);

if (!bio)
return;

if (blk_integrity_rq(req) && req_op(req) == REQ_OP_READ)
req->q->integrity.profile->complete_fn(req, total_bytes);

blk_account_io_completion(req, total_bytes);

do {
struct bio *next = bio->bi_next;


bio_clear_flag(bio, BIO_TRACE_COMPLETION);

if (req_op(req) == REQ_OP_ZONE_APPEND)
bio->bi_iter.bi_sector = req->__sector;

if (!is_flush)
bio_endio(bio);
bio = next;
} while (bio);


if (!req->end_io) {
req->bio = NULL;
req->__data_len = 0;
}
}