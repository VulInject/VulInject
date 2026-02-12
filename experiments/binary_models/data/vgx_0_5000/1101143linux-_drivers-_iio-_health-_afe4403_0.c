};
AFE440X_TABLE_ATTR(in_intensity_capacitance_available, afe4403_cap_table);

static ssize_t afe440x_show_register(struct device *dev,
struct device_attribute *attr,
char *buf)
{
struct iio_dev *indio_dev = dev_to_iio_dev(dev);
struct afe4403_data *afe = iio_priv(indio_dev);
struct afe440x_attr *afe440x_attr = to_afe440x_attr(attr);
unsigned int reg_val;
int vals[2];
int ret;

ret = regmap_field_read(afe->fields[afe440x_attr->field], &reg_val);
if (ret)
return ret;

if (reg_val >= afe440x_attr->table_size)
return -EINVAL;

vals[0] = afe440x_attr->val_table[reg_val].integer;
vals[1] = afe440x_attr->val_table[reg_val].fract;

return iio_format_value(buf, IIO_VAL_INT_PLUS_MICRO, 2, vals);
}