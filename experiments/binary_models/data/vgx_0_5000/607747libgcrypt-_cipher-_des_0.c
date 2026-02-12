static void
_gcry_3des_ctr_enc(void *context, unsigned char *ctr, void *outbuf_arg,
const void *inbuf_arg, size_t nblocks)
{
struct _tripledes_ctx *ctx = context;
unsigned char *outbuf = outbuf_arg;
const unsigned char *inbuf = inbuf_arg;
unsigned char tmpbuf[DES_BLOCKSIZE];
int burn_stack_depth = TRIPLEDES_ECB_BURN_STACK;

{
int asm_burn_depth = 9 * sizeof(void *);

if (nblocks >= 3 && burn_stack_depth < asm_burn_depth)
burn_stack_depth = asm_burn_depth;


while (nblocks >= 3)
{
tripledes_amd64_ctr_enc(ctx->encrypt_subkeys, outbuf, inbuf, ctr);

nblocks -= 3;
outbuf += 3 * DES_BLOCKSIZE;
inbuf  += 3 * DES_BLOCKSIZE;
}


}

for ( ;nblocks; nblocks-- )
{

tripledes_ecb_encrypt (ctx, ctr, tmpbuf);

cipher_block_xor(outbuf, tmpbuf, inbuf, DES_BLOCKSIZE);
outbuf += DES_BLOCKSIZE;
inbuf  += DES_BLOCKSIZE;

cipher_block_add(ctr, 1, DES_BLOCKSIZE);
}

wipememory(tmpbuf, sizeof(tmpbuf));
_gcry_burn_stack(burn_stack_depth);
}