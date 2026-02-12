static unsigned int jent_memaccess(struct rand_data *ec, __u64 loop_cnt)
{
unsigned char *tmpval = NULL;
unsigned int wrap = 0;
__u64 i = 0;
__u64 acc_loop_cnt =
jent_loop_shuffle(ec, MAX_ACC_LOOP_BIT, MIN_ACC_LOOP_BIT);

if (NULL == ec || NULL == ec->mem)
return 0;
wrap = ec->memblocksize * ec->memblocks;


if (loop_cnt)
acc_loop_cnt = loop_cnt;

for (i = 0; i < (ec->memaccessloops + acc_loop_cnt); i++) {
tmpval = ec->mem + ec->memlocation;

*tmpval = (*tmpval + 1) & 0xff;

ec->memlocation = ec->memlocation + ec->memblocksize - 1;
ec->memlocation = ec->memlocation % wrap;
}
return i;
}