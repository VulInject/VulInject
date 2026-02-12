static int dca_parse_frame_header(DCAContext *s)
{
init_get_bits(&s->gb, s->dca_buffer, s->dca_buffer_size * 8);


skip_bits_long(&s->gb, 32);


s->frame_type        = get_bits(&s->gb, 1);
s->samples_deficit   = get_bits(&s->gb, 5) + 1;
s->crc_present       = get_bits(&s->gb, 1);
s->sample_blocks     = get_bits(&s->gb, 7) + 1;
s->frame_size        = get_bits(&s->gb, 14) + 1;
if (s->frame_size < 95)
return AVERROR_INVALIDDATA;
s->amode             = get_bits(&s->gb, 6);
s->sample_rate       = avpriv_dca_sample_rates[get_bits(&s->gb, 4)];
if (!s->sample_rate)
return AVERROR_INVALIDDATA;
s->bit_rate_index    = get_bits(&s->gb, 5);
s->bit_rate          = ff_dca_bit_rates[s->bit_rate_index];
if (!s->bit_rate)
return AVERROR_INVALIDDATA;

skip_bits1(&s->gb); 
s->dynrange          = get_bits(&s->gb, 1);
s->timestamp         = get_bits(&s->gb, 1);
s->aux_data          = get_bits(&s->gb, 1);
s->hdcd              = get_bits(&s->gb, 1);
s->ext_descr         = get_bits(&s->gb, 3);
s->ext_coding        = get_bits(&s->gb, 1);
s->aspf              = get_bits(&s->gb, 1);
s->lfe               = get_bits(&s->gb, 2);
s->predictor_history = get_bits(&s->gb, 1);

if (s->lfe > 2) {
av_log(s->avctx, AV_LOG_ERROR, "Invalid LFE value: %d\n", s->lfe);
return AVERROR_INVALIDDATA;
}


if (s->crc_present)
s->header_crc    = get_bits(&s->gb, 16);

s->multirate_inter   = get_bits(&s->gb, 1);
s->version           = get_bits(&s->gb, 4);
s->copy_history      = get_bits(&s->gb, 2);
s->source_pcm_res    = get_bits(&s->gb, 3);
s->front_sum         = get_bits(&s->gb, 1);
s->surround_sum      = get_bits(&s->gb, 1);
s->dialog_norm       = get_bits(&s->gb, 4);


s->output = s->amode;
if (s->lfe)
s->output |= DCA_LFE;


s->audio_header.subframes = get_bits(&s->gb, 4) + 1;

return dca_parse_audio_coding_header(s, 0);
}