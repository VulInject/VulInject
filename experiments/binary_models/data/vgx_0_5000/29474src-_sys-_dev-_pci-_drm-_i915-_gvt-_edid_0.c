static unsigned char edid_get_byte(struct intel_vgpu *vgpu)
{
struct intel_vgpu_i2c_edid *edid = &vgpu->display.i2c_edid;
unsigned char chr = 0;

if (edid->state == I2C_NOT_SPECIFIED || !edid->slave_selected) {
gvt_vgpu_err("Driver tries to read EDID without proper sequence!\n");
return 0;
}
if (edid->current_edid_read >= EDID_SIZE) {
gvt_vgpu_err("edid_get_byte() exceeds the size of EDID!\n");
return 0;
}

if (!edid->edid_available) {
gvt_vgpu_err("Reading EDID but EDID is not available!\n");
return 0;
}

if (intel_vgpu_has_monitor_on_port(vgpu, edid->port)) {
struct intel_vgpu_edid_data *edid_data =
intel_vgpu_port(vgpu, edid->port)->edid;

chr = edid_data->edid_block[edid->current_edid_read];
edid->current_edid_read++;
} else {
gvt_vgpu_err("No EDID available during the reading?\n");
}
return chr;
}