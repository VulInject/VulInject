void sha384_hash_buffer(const unsigned char *ib, int ile, unsigned char *ob, int ole)
{
sha512_context ctx;

if(ole < 1) return;
memset(ob, 0, ole);
if(ole > 48) ole = 48;
sha384_init(&ctx);
unsigned int length;
SECStatus status = PK11_DigestOp(ctx.ctx_nss, ib, ile);
PR_ASSERT(status==SECSuccess);
status=PK11_DigestFinal(ctx.ctx_nss, ob, &length, ole);
PR_ASSERT(length==ole);
PR_ASSERT(status==SECSuccess);
PK11_DestroyContext(ctx.ctx_nss, PR_TRUE);
DBG(DBG_CRYPT, DBG_log("NSS: sha384 init end"));
}