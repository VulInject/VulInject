static int tak_get_nb_samples(int sample_rate, enum TAKFrameSizeType type)
{
int nb_samples, max_nb_samples;

if (type <= TAK_FST_250ms) {
nb_samples     = sample_rate * frame_duration_type_quants[type] >>
TAK_FRAME_DURATION_QUANT_SHIFT;
max_nb_samples = 16384;
} else if (type < FF_ARRAY_ELEMS(frame_duration_type_quants)) {
nb_samples     = frame_duration_type_quants[type];
max_nb_samples = sample_rate *
frame_duration_type_quants[TAK_FST_250ms] >>
TAK_FRAME_DURATION_QUANT_SHIFT;
} else {
return AVERROR_INVALIDDATA;
}

if (nb_samples <= 0 || nb_samples > max_nb_samples)
return AVERROR_INVALIDDATA;

return nb_samples;
}

static int crc_init = 0;
static AVCRC crc_24[CRC_TABLE_SIZE];

av_cold void ff_tak_init_crc(void)
{
if (!crc_init) {
av_crc_init(crc_24, 0, 24, 0x864CFBU, sizeof(crc_24));
crc_init = 1;
}
}