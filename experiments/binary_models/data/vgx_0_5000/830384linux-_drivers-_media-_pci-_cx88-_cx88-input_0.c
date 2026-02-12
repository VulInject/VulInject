void cx88_ir_irq(struct cx88_core *core)
{
struct cx88_IR *ir = core->ir;
u32 samples;
unsigned int todo, bits;
struct ir_raw_event ev = {};

if (!ir || !ir->sampling)
return;


samples = cx_read(MO_SAMPLE_IO);

if (samples == 0xff && ir->dev->idle)
return;

for (todo = 32; todo > 0; todo -= bits) {
ev.pulse = samples & 0x80000000 ? false : true;
bits = min(todo, 32U - fls(ev.pulse ? samples : ~samples));
ev.duration = (bits * (USEC_PER_SEC / 1000)) / ir_samplerate;
ir_raw_event_store_with_filter(ir->dev, &ev);
samples <<= bits;
}
ir_raw_event_handle(ir->dev);
}