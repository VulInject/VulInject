int RSA_encrypt(const RSA_CTX *ctx, const uint8_t *in_data, uint16_t in_len, 
uint8_t *out_data, int is_signing)
{
int byte_size = ctx->num_octets;
int num_pads_needed = byte_size-in_len-3;
bigint *dat_bi, *encrypt_bi;


out_data[0] = 0;     

if (is_signing)
{
out_data[1] = 1;        
memset(&out_data[2], 0xff, num_pads_needed);
}
else    
{
out_data[1] = 2;
if (get_random_NZ(num_pads_needed, &out_data[2]) < 0)
return -1;
}

out_data[2+num_pads_needed] = 0;
memcpy(&out_data[3+num_pads_needed], in_data, in_len);


dat_bi = bi_import(ctx->bi_ctx, out_data, byte_size);
encrypt_bi = is_signing ? RSA_private(ctx, dat_bi) : 
RSA_public(ctx, dat_bi);
bi_export(ctx->bi_ctx, encrypt_bi, out_data, byte_size);


bi_clear_cache(ctx->bi_ctx);
return byte_size;
}