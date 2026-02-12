int
jsal_push_class_fatobj(int class_id, bool in_ctor, size_t data_size, void* *out_data_ptr)
{
struct class_data*  class_data;
js_finalizer_t      finalizer = NULL;
int                 index;
struct object_data* object_data;
js_ref_t*           prototype;

class_data = vector_get(s_classes, s_class_index[class_id]);
finalizer = class_data->finalizer;
prototype = class_data->prototype;




if (in_ctor && jsal_is_subclass_ctor()) {
jsal_push_newtarget();
jsal_get_prop_key(-1, s_key_prototype);
jsal_replace(-2);
}
else {
jsal_push_ref_weak(prototype);
}

index = jsal_push_new_host_object(on_finalize_sphere_object, sizeof(struct object_data) + data_size, (void**)&object_data);
object_data->class_id = class_id;
object_data->finalizer = finalizer;
object_data->ptr = &object_data[1];
if (out_data_ptr != NULL)
*out_data_ptr = object_data->ptr;

return index;
}