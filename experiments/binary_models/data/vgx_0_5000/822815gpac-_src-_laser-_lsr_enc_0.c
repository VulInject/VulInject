static void lsr_write_vluimsbf8(GF_LASeRCodec *lsr, u32 val, const char *name)
{
u32 nb_words;
u32 nb_tot, nb_bits = val ? gf_get_bit_size(val) : 1;
nb_words = nb_bits / 7;
if (nb_bits%7) nb_words++;
assert(nb_words * 7 >= nb_bits);
nb_bits = nb_words * 7;
nb_tot = nb_words+nb_bits;
while (nb_words) {
nb_words--;
gf_bs_write_int(lsr->bs, nb_words ? 1 : 0, 1);
}
gf_bs_write_int(lsr->bs, val, nb_bits);
GF_LOG(GF_LOG_DEBUG, GF_LOG_CODING, ("[LASeR] %s\t\t%d\t\t%d\n", name, nb_tot, val));
}