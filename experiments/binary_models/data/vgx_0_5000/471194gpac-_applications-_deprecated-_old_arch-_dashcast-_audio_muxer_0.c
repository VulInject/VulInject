int dc_gpac_audio_isom_open_seg(AudioOutputFile *audio_output_file, char *filename)
{
GF_Err ret;
ret = gf_isom_start_segment(audio_output_file->isof, filename, GF_TRUE);
if (ret != GF_OK) {
GF_LOG(GF_LOG_ERROR, GF_LOG_DASH, ("%s: gf_isom_start_segment\n", gf_error_to_string(ret)));
return -1;
}

GF_LOG(GF_LOG_DEBUG, GF_LOG_DASH, ("[DashCast] Audio segment %s started at "LLU"\n", filename, gf_net_get_utc() ));

audio_output_file->dts = 0;

return 0;
}