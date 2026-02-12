void FDECL1(add_hash, struct directory_entry *, spnt){
struct file_hash * s_hash;
unsigned int hash_number;

if(spnt->size == 0 || spnt->starting_block == 0) 
if(spnt->size != 0 || spnt->starting_block != 0) {
fprintf(stderr,"Non zero-length file assigned zero extent.\n");
exit(1);
};

if (spnt->dev == (dev_t) UNCACHED_DEVICE || spnt->inode == UNCACHED_INODE) return;
hash_number = HASH_FN((unsigned int) spnt->dev, (unsigned int) spnt->inode);

if (verbose > 1) fprintf(stderr,"%s ",spnt->name);
s_hash = (struct file_hash *) e_malloc(sizeof(struct file_hash));
s_hash->next = hash_table[hash_number];
s_hash->inode = spnt->inode;
s_hash->dev = spnt->dev;
s_hash->starting_block = spnt->starting_block;
s_hash->size = spnt->size;
hash_table[hash_number] = s_hash;
}