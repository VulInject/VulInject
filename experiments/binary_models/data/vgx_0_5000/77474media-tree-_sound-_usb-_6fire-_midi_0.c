static void usb6fire_midi_out_handler(struct urb *urb)
{
struct midi_runtime *rt = urb->context;
int ret;
unsigned long flags;

spin_lock_irqsave(&rt->out_lock, flags);

if (rt->out) {
ret = snd_rawmidi_transmit(rt->out, rt->out_buffer + 4,
MIDI_BUFSIZE - 4);
if (ret > 0) { 
rt->out_buffer[1] = ret + 2;
rt->out_buffer[3] = rt->out_serial++;
urb->transfer_buffer_length = ret + 4;

ret = usb_submit_urb(urb, GFP_ATOMIC);
if (ret < 0)
dev_err(&urb->dev->dev,
"midi out urb submit failed: %d\n",
ret);
} else 
rt->out = NULL;
}
spin_unlock_irqrestore(&rt->out_lock, flags);
}