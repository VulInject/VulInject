gimp_operation_layer_mode_blend_softlight (GeglOperation *operation,
const gfloat  *in,
const gfloat  *layer,
gfloat        *comp,
gint           samples)
{
while (samples--)
{
if (in[ALPHA] != 0.0f && layer[ALPHA] != 0.0f)
{
gint c;

for (c = 0; c < 3; c++)
{
gfloat multiply = in[c] * layer[c];
gfloat screen   = 1.0f - (1.0f - in[c]) * (1.0f - layer[c]);
gfloat val      = (1.0f - in[c]) * multiply + in[c] * screen;

comp[c] = val;
}
}
comp[ALPHA] = layer[ALPHA];

comp  += 4;
layer += 4;
in    += 4;
}
}