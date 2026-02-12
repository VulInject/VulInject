struct bio *
btrfs_bio_alloc(struct block_device *bdev, u64 first_sector, int nr_vecs,
gfp_t gfp_flags)
{
struct btrfs_io_bio *btrfs_bio;
struct bio *bio;

bio = bio_alloc_bioset(gfp_flags, nr_vecs, btrfs_bioset);

if (bio == NULL && (current->flags & PF_MEMALLOC)) {
while (!bio && (nr_vecs /= 2)) {
bio = bio_alloc_bioset(gfp_flags,
nr_vecs, btrfs_bioset);
}
}

if (bio) {
bio->bi_bdev = bdev;
bio->bi_iter.bi_sector = first_sector;
btrfs_bio = btrfs_io_bio(bio);
btrfs_bio->csum = NULL;
btrfs_bio->csum_allocated = NULL;
btrfs_bio->end_io = NULL;
}
return bio;
}