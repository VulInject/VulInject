process_sample_hdr (u8 *buf)

{
wavefront_sample s;
u8 *ptr;

ptr = buf;



*((u32 *) &s.sampleStartOffset) = demunge_int32 (ptr, 4); ptr += 4;
*((u32 *) &s.loopStartOffset) = demunge_int32 (ptr, 4); ptr += 4;
*((u32 *) &s.loopEndOffset) = demunge_int32 (ptr, 4); ptr += 4;
*((u32 *) &s.sampleEndOffset) = demunge_int32 (ptr, 4); ptr += 4;
*((u32 *) &s.FrequencyBias) = demunge_int32 (ptr, 3); ptr += 3;

s.SampleResolution = *ptr & 0x3;
s.Loop = *ptr & 0x8;
s.Bidirectional = *ptr & 0x10;
s.Reverse = *ptr & 0x40;



memcpy (buf, (unsigned char *) &s, sizeof (wavefront_sample));
}