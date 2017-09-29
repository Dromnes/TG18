sealed class TG18_accessor_tg_Button_Text: global::Uno.UX.PropertyAccessor
{
    public static global::Uno.UX.PropertyAccessor Singleton = new TG18_accessor_tg_Button_Text();
    public override global::Uno.UX.Selector Name { get { return _name; } }
    static global::Uno.UX.Selector _name = "Text";
    public override global::Uno.Type PropertyType { get { return typeof(string); } }
    public override object GetAsObject(global::Uno.UX.PropertyObject obj) { return ((tg.Button)obj).Text; }
    public override void SetAsObject(global::Uno.UX.PropertyObject obj, object v, global::Uno.UX.IPropertyListener origin) { ((tg.Button)obj).SetText((string)v, origin); }
    public override bool SupportsOriginSetter { get { return true; } }
}
sealed class TG18_accessor_tg_Button_Font: global::Uno.UX.PropertyAccessor
{
    public static global::Uno.UX.PropertyAccessor Singleton = new TG18_accessor_tg_Button_Font();
    public override global::Uno.UX.Selector Name { get { return _name; } }
    static global::Uno.UX.Selector _name = "Font";
    public override global::Uno.Type PropertyType { get { return typeof(Fuse.Font); } }
    public override object GetAsObject(global::Uno.UX.PropertyObject obj) { return ((tg.Button)obj).Font; }
    public override void SetAsObject(global::Uno.UX.PropertyObject obj, object v, global::Uno.UX.IPropertyListener origin) { ((tg.Button)obj).SetFont((Fuse.Font)v, origin); }
    public override bool SupportsOriginSetter { get { return true; } }
}
sealed class TG18_accessor_tg_Button_FontSize: global::Uno.UX.PropertyAccessor
{
    public static global::Uno.UX.PropertyAccessor Singleton = new TG18_accessor_tg_Button_FontSize();
    public override global::Uno.UX.Selector Name { get { return _name; } }
    static global::Uno.UX.Selector _name = "FontSize";
    public override global::Uno.Type PropertyType { get { return typeof(int); } }
    public override object GetAsObject(global::Uno.UX.PropertyObject obj) { return ((tg.Button)obj).FontSize; }
    public override void SetAsObject(global::Uno.UX.PropertyObject obj, object v, global::Uno.UX.IPropertyListener origin) { ((tg.Button)obj).SetFontSize((int)v, origin); }
    public override bool SupportsOriginSetter { get { return true; } }
}
sealed class TG18_accessor_tg_Button_TextColor: global::Uno.UX.PropertyAccessor
{
    public static global::Uno.UX.PropertyAccessor Singleton = new TG18_accessor_tg_Button_TextColor();
    public override global::Uno.UX.Selector Name { get { return _name; } }
    static global::Uno.UX.Selector _name = "TextColor";
    public override global::Uno.Type PropertyType { get { return typeof(float4); } }
    public override object GetAsObject(global::Uno.UX.PropertyObject obj) { return ((tg.Button)obj).TextColor; }
    public override void SetAsObject(global::Uno.UX.PropertyObject obj, object v, global::Uno.UX.IPropertyListener origin) { ((tg.Button)obj).SetTextColor((float4)v, origin); }
    public override bool SupportsOriginSetter { get { return true; } }
}
sealed class TG18_accessor_tg_CircleButton_Text: global::Uno.UX.PropertyAccessor
{
    public static global::Uno.UX.PropertyAccessor Singleton = new TG18_accessor_tg_CircleButton_Text();
    public override global::Uno.UX.Selector Name { get { return _name; } }
    static global::Uno.UX.Selector _name = "Text";
    public override global::Uno.Type PropertyType { get { return typeof(string); } }
    public override object GetAsObject(global::Uno.UX.PropertyObject obj) { return ((tg.CircleButton)obj).Text; }
    public override void SetAsObject(global::Uno.UX.PropertyObject obj, object v, global::Uno.UX.IPropertyListener origin) { ((tg.CircleButton)obj).SetText((string)v, origin); }
    public override bool SupportsOriginSetter { get { return true; } }
}
sealed class TG18_accessor_tg_CircleButton_Font: global::Uno.UX.PropertyAccessor
{
    public static global::Uno.UX.PropertyAccessor Singleton = new TG18_accessor_tg_CircleButton_Font();
    public override global::Uno.UX.Selector Name { get { return _name; } }
    static global::Uno.UX.Selector _name = "Font";
    public override global::Uno.Type PropertyType { get { return typeof(Fuse.Font); } }
    public override object GetAsObject(global::Uno.UX.PropertyObject obj) { return ((tg.CircleButton)obj).Font; }
    public override void SetAsObject(global::Uno.UX.PropertyObject obj, object v, global::Uno.UX.IPropertyListener origin) { ((tg.CircleButton)obj).SetFont((Fuse.Font)v, origin); }
    public override bool SupportsOriginSetter { get { return true; } }
}
sealed class TG18_accessor_tg_CircleButton_FontSize: global::Uno.UX.PropertyAccessor
{
    public static global::Uno.UX.PropertyAccessor Singleton = new TG18_accessor_tg_CircleButton_FontSize();
    public override global::Uno.UX.Selector Name { get { return _name; } }
    static global::Uno.UX.Selector _name = "FontSize";
    public override global::Uno.Type PropertyType { get { return typeof(int); } }
    public override object GetAsObject(global::Uno.UX.PropertyObject obj) { return ((tg.CircleButton)obj).FontSize; }
    public override void SetAsObject(global::Uno.UX.PropertyObject obj, object v, global::Uno.UX.IPropertyListener origin) { ((tg.CircleButton)obj).SetFontSize((int)v, origin); }
    public override bool SupportsOriginSetter { get { return true; } }
}
sealed class TG18_accessor_tg_CircleButton_TextColor: global::Uno.UX.PropertyAccessor
{
    public static global::Uno.UX.PropertyAccessor Singleton = new TG18_accessor_tg_CircleButton_TextColor();
    public override global::Uno.UX.Selector Name { get { return _name; } }
    static global::Uno.UX.Selector _name = "TextColor";
    public override global::Uno.Type PropertyType { get { return typeof(float4); } }
    public override object GetAsObject(global::Uno.UX.PropertyObject obj) { return ((tg.CircleButton)obj).TextColor; }
    public override void SetAsObject(global::Uno.UX.PropertyObject obj, object v, global::Uno.UX.IPropertyListener origin) { ((tg.CircleButton)obj).SetTextColor((float4)v, origin); }
    public override bool SupportsOriginSetter { get { return true; } }
}
sealed class TG18_accessor_tg_ColorButton_ButtonColor: global::Uno.UX.PropertyAccessor
{
    public static global::Uno.UX.PropertyAccessor Singleton = new TG18_accessor_tg_ColorButton_ButtonColor();
    public override global::Uno.UX.Selector Name { get { return _name; } }
    static global::Uno.UX.Selector _name = "ButtonColor";
    public override global::Uno.Type PropertyType { get { return typeof(float4); } }
    public override object GetAsObject(global::Uno.UX.PropertyObject obj) { return ((tg.ColorButton)obj).ButtonColor; }
    public override void SetAsObject(global::Uno.UX.PropertyObject obj, object v, global::Uno.UX.IPropertyListener origin) { ((tg.ColorButton)obj).SetButtonColor((float4)v, origin); }
    public override bool SupportsOriginSetter { get { return true; } }
}
sealed class TG18_FuseAndroidStatusBarConfig_Color_Property: Uno.UX.Property<float4>
{
    [Uno.WeakReference] readonly Fuse.Android.StatusBarConfig _obj;
    public TG18_FuseAndroidStatusBarConfig_Color_Property(Fuse.Android.StatusBarConfig obj, global::Uno.UX.Selector name) : base(name) { _obj = obj; }
    public override global::Uno.UX.PropertyObject Object { get { return _obj; } }
    public override float4 Get(global::Uno.UX.PropertyObject obj) { return ((Fuse.Android.StatusBarConfig)obj).Color; }
    public override void Set(global::Uno.UX.PropertyObject obj, float4 v, global::Uno.UX.IPropertyListener origin) { ((Fuse.Android.StatusBarConfig)obj).Color = v; }
}
sealed class TG18_FuseReactiveEach_Items_Property: Uno.UX.Property<object>
{
    [Uno.WeakReference] readonly Fuse.Reactive.Each _obj;
    public TG18_FuseReactiveEach_Items_Property(Fuse.Reactive.Each obj, global::Uno.UX.Selector name) : base(name) { _obj = obj; }
    public override global::Uno.UX.PropertyObject Object { get { return _obj; } }
    public override object Get(global::Uno.UX.PropertyObject obj) { return ((Fuse.Reactive.Each)obj).Items; }
    public override void Set(global::Uno.UX.PropertyObject obj, object v, global::Uno.UX.IPropertyListener origin) { ((Fuse.Reactive.Each)obj).Items = v; }
}
sealed class TG18_FuseLayoutsGridLayout_ColumnCount_Property: Uno.UX.Property<int>
{
    [Uno.WeakReference] readonly Fuse.Layouts.GridLayout _obj;
    public TG18_FuseLayoutsGridLayout_ColumnCount_Property(Fuse.Layouts.GridLayout obj, global::Uno.UX.Selector name) : base(name) { _obj = obj; }
    public override global::Uno.UX.PropertyObject Object { get { return _obj; } }
    public override int Get(global::Uno.UX.PropertyObject obj) { return ((Fuse.Layouts.GridLayout)obj).ColumnCount; }
    public override void Set(global::Uno.UX.PropertyObject obj, int v, global::Uno.UX.IPropertyListener origin) { ((Fuse.Layouts.GridLayout)obj).ColumnCount = v; }
}
sealed class TG18_FuseNavigationNavigateTo_Target_Property: Uno.UX.Property<Fuse.Visual>
{
    [Uno.WeakReference] readonly Fuse.Navigation.NavigateTo _obj;
    public TG18_FuseNavigationNavigateTo_Target_Property(Fuse.Navigation.NavigateTo obj, global::Uno.UX.Selector name) : base(name) { _obj = obj; }
    public override global::Uno.UX.PropertyObject Object { get { return _obj; } }
    public override Fuse.Visual Get(global::Uno.UX.PropertyObject obj) { return ((Fuse.Navigation.NavigateTo)obj).Target; }
    public override void Set(global::Uno.UX.PropertyObject obj, Fuse.Visual v, global::Uno.UX.IPropertyListener origin) { ((Fuse.Navigation.NavigateTo)obj).Target = v; }
}
sealed class TG18_FuseControlsImage_Source_Property: Uno.UX.Property<Fuse.Resources.ImageSource>
{
    [Uno.WeakReference] readonly Fuse.Controls.Image _obj;
    public TG18_FuseControlsImage_Source_Property(Fuse.Controls.Image obj, global::Uno.UX.Selector name) : base(name) { _obj = obj; }
    public override global::Uno.UX.PropertyObject Object { get { return _obj; } }
    public override Fuse.Resources.ImageSource Get(global::Uno.UX.PropertyObject obj) { return ((Fuse.Controls.Image)obj).Source; }
    public override void Set(global::Uno.UX.PropertyObject obj, Fuse.Resources.ImageSource v, global::Uno.UX.IPropertyListener origin) { ((Fuse.Controls.Image)obj).Source = v; }
}
sealed class TG18_FuseControlsShape_Color_Property: Uno.UX.Property<float4>
{
    [Uno.WeakReference] readonly Fuse.Controls.Shape _obj;
    public TG18_FuseControlsShape_Color_Property(Fuse.Controls.Shape obj, global::Uno.UX.Selector name) : base(name) { _obj = obj; }
    public override global::Uno.UX.PropertyObject Object { get { return _obj; } }
    public override float4 Get(global::Uno.UX.PropertyObject obj) { return ((Fuse.Controls.Shape)obj).Color; }
    public override void Set(global::Uno.UX.PropertyObject obj, float4 v, global::Uno.UX.IPropertyListener origin) { ((Fuse.Controls.Shape)obj).SetColor(v, origin); }
    public override bool SupportsOriginSetter { get { return true; } }
}
sealed class TG18_FuseControlsTextControl_Value_Property: Uno.UX.Property<string>
{
    [Uno.WeakReference] readonly Fuse.Controls.TextControl _obj;
    public TG18_FuseControlsTextControl_Value_Property(Fuse.Controls.TextControl obj, global::Uno.UX.Selector name) : base(name) { _obj = obj; }
    public override global::Uno.UX.PropertyObject Object { get { return _obj; } }
    public override string Get(global::Uno.UX.PropertyObject obj) { return ((Fuse.Controls.TextControl)obj).Value; }
    public override void Set(global::Uno.UX.PropertyObject obj, string v, global::Uno.UX.IPropertyListener origin) { ((Fuse.Controls.TextControl)obj).SetValue(v, origin); }
    public override bool SupportsOriginSetter { get { return true; } }
}
sealed class TG18_FuseControlsTextControl_Font_Property: Uno.UX.Property<Fuse.Font>
{
    [Uno.WeakReference] readonly Fuse.Controls.TextControl _obj;
    public TG18_FuseControlsTextControl_Font_Property(Fuse.Controls.TextControl obj, global::Uno.UX.Selector name) : base(name) { _obj = obj; }
    public override global::Uno.UX.PropertyObject Object { get { return _obj; } }
    public override Fuse.Font Get(global::Uno.UX.PropertyObject obj) { return ((Fuse.Controls.TextControl)obj).Font; }
    public override void Set(global::Uno.UX.PropertyObject obj, Fuse.Font v, global::Uno.UX.IPropertyListener origin) { ((Fuse.Controls.TextControl)obj).Font = v; }
}
sealed class TG18_FuseControlsTextControl_FontSize_Property: Uno.UX.Property<float>
{
    [Uno.WeakReference] readonly Fuse.Controls.TextControl _obj;
    public TG18_FuseControlsTextControl_FontSize_Property(Fuse.Controls.TextControl obj, global::Uno.UX.Selector name) : base(name) { _obj = obj; }
    public override global::Uno.UX.PropertyObject Object { get { return _obj; } }
    public override float Get(global::Uno.UX.PropertyObject obj) { return ((Fuse.Controls.TextControl)obj).FontSize; }
    public override void Set(global::Uno.UX.PropertyObject obj, float v, global::Uno.UX.IPropertyListener origin) { ((Fuse.Controls.TextControl)obj).FontSize = v; }
}
sealed class TG18_FuseControlsTextControl_Color_Property: Uno.UX.Property<float4>
{
    [Uno.WeakReference] readonly Fuse.Controls.TextControl _obj;
    public TG18_FuseControlsTextControl_Color_Property(Fuse.Controls.TextControl obj, global::Uno.UX.Selector name) : base(name) { _obj = obj; }
    public override global::Uno.UX.PropertyObject Object { get { return _obj; } }
    public override float4 Get(global::Uno.UX.PropertyObject obj) { return ((Fuse.Controls.TextControl)obj).Color; }
    public override void Set(global::Uno.UX.PropertyObject obj, float4 v, global::Uno.UX.IPropertyListener origin) { ((Fuse.Controls.TextControl)obj).SetColor(v, origin); }
    public override bool SupportsOriginSetter { get { return true; } }
}
sealed class TG18_FuseDrawingGradientStop_Color_Property: Uno.UX.Property<float4>
{
    [Uno.WeakReference] readonly Fuse.Drawing.GradientStop _obj;
    public TG18_FuseDrawingGradientStop_Color_Property(Fuse.Drawing.GradientStop obj, global::Uno.UX.Selector name) : base(name) { _obj = obj; }
    public override global::Uno.UX.PropertyObject Object { get { return _obj; } }
    public override float4 Get(global::Uno.UX.PropertyObject obj) { return ((Fuse.Drawing.GradientStop)obj).Color; }
    public override void Set(global::Uno.UX.PropertyObject obj, float4 v, global::Uno.UX.IPropertyListener origin) { ((Fuse.Drawing.GradientStop)obj).Color = v; }
}
sealed class TG18_FuseResourcesResourceFloat4_Value_Property: Uno.UX.Property<float4>
{
    [Uno.WeakReference] readonly Fuse.Resources.ResourceFloat4 _obj;
    public TG18_FuseResourcesResourceFloat4_Value_Property(Fuse.Resources.ResourceFloat4 obj, global::Uno.UX.Selector name) : base(name) { _obj = obj; }
    public override global::Uno.UX.PropertyObject Object { get { return _obj; } }
    public override float4 Get(global::Uno.UX.PropertyObject obj) { return ((Fuse.Resources.ResourceFloat4)obj).Value; }
    public override void Set(global::Uno.UX.PropertyObject obj, float4 v, global::Uno.UX.IPropertyListener origin) { ((Fuse.Resources.ResourceFloat4)obj).Value = v; }
}
sealed class TG18_tgButton_TextColor_Property: Uno.UX.Property<float4>
{
    [Uno.WeakReference] readonly tg.Button _obj;
    public TG18_tgButton_TextColor_Property(tg.Button obj, global::Uno.UX.Selector name) : base(name) { _obj = obj; }
    public override global::Uno.UX.PropertyObject Object { get { return _obj; } }
    public override float4 Get(global::Uno.UX.PropertyObject obj) { return ((tg.Button)obj).TextColor; }
    public override void Set(global::Uno.UX.PropertyObject obj, float4 v, global::Uno.UX.IPropertyListener origin) { ((tg.Button)obj).SetTextColor(v, origin); }
    public override bool SupportsOriginSetter { get { return true; } }
}
sealed class TG18_tgColorButton_ButtonName_Property: Uno.UX.Property<string>
{
    [Uno.WeakReference] readonly tg.ColorButton _obj;
    public TG18_tgColorButton_ButtonName_Property(tg.ColorButton obj, global::Uno.UX.Selector name) : base(name) { _obj = obj; }
    public override global::Uno.UX.PropertyObject Object { get { return _obj; } }
    public override string Get(global::Uno.UX.PropertyObject obj) { return ((tg.ColorButton)obj).ButtonName; }
    public override void Set(global::Uno.UX.PropertyObject obj, string v, global::Uno.UX.IPropertyListener origin) { ((tg.ColorButton)obj).SetButtonName(v, origin); }
    public override bool SupportsOriginSetter { get { return true; } }
}
sealed class TG18_tgColorButton_ButtonColor_Property: Uno.UX.Property<float4>
{
    [Uno.WeakReference] readonly tg.ColorButton _obj;
    public TG18_tgColorButton_ButtonColor_Property(tg.ColorButton obj, global::Uno.UX.Selector name) : base(name) { _obj = obj; }
    public override global::Uno.UX.PropertyObject Object { get { return _obj; } }
    public override float4 Get(global::Uno.UX.PropertyObject obj) { return ((tg.ColorButton)obj).ButtonColor; }
    public override void Set(global::Uno.UX.PropertyObject obj, float4 v, global::Uno.UX.IPropertyListener origin) { ((tg.ColorButton)obj).SetButtonColor(v, origin); }
    public override bool SupportsOriginSetter { get { return true; } }
}
sealed class TG18_tgCircleButton_Text_Property: Uno.UX.Property<string>
{
    [Uno.WeakReference] readonly tg.CircleButton _obj;
    public TG18_tgCircleButton_Text_Property(tg.CircleButton obj, global::Uno.UX.Selector name) : base(name) { _obj = obj; }
    public override global::Uno.UX.PropertyObject Object { get { return _obj; } }
    public override string Get(global::Uno.UX.PropertyObject obj) { return ((tg.CircleButton)obj).Text; }
    public override void Set(global::Uno.UX.PropertyObject obj, string v, global::Uno.UX.IPropertyListener origin) { ((tg.CircleButton)obj).SetText(v, origin); }
    public override bool SupportsOriginSetter { get { return true; } }
}
sealed class TG18_tgCircleButton_TextColor_Property: Uno.UX.Property<float4>
{
    [Uno.WeakReference] readonly tg.CircleButton _obj;
    public TG18_tgCircleButton_TextColor_Property(tg.CircleButton obj, global::Uno.UX.Selector name) : base(name) { _obj = obj; }
    public override global::Uno.UX.PropertyObject Object { get { return _obj; } }
    public override float4 Get(global::Uno.UX.PropertyObject obj) { return ((tg.CircleButton)obj).TextColor; }
    public override void Set(global::Uno.UX.PropertyObject obj, float4 v, global::Uno.UX.IPropertyListener origin) { ((tg.CircleButton)obj).SetTextColor(v, origin); }
    public override bool SupportsOriginSetter { get { return true; } }
}
sealed class TG18_tgCircleButton_Font_Property: Uno.UX.Property<Fuse.Font>
{
    [Uno.WeakReference] readonly tg.CircleButton _obj;
    public TG18_tgCircleButton_Font_Property(tg.CircleButton obj, global::Uno.UX.Selector name) : base(name) { _obj = obj; }
    public override global::Uno.UX.PropertyObject Object { get { return _obj; } }
    public override Fuse.Font Get(global::Uno.UX.PropertyObject obj) { return ((tg.CircleButton)obj).Font; }
    public override void Set(global::Uno.UX.PropertyObject obj, Fuse.Font v, global::Uno.UX.IPropertyListener origin) { ((tg.CircleButton)obj).SetFont(v, origin); }
    public override bool SupportsOriginSetter { get { return true; } }
}
sealed class TG18_tgCircleButton_FontSize_Property: Uno.UX.Property<int>
{
    [Uno.WeakReference] readonly tg.CircleButton _obj;
    public TG18_tgCircleButton_FontSize_Property(tg.CircleButton obj, global::Uno.UX.Selector name) : base(name) { _obj = obj; }
    public override global::Uno.UX.PropertyObject Object { get { return _obj; } }
    public override int Get(global::Uno.UX.PropertyObject obj) { return ((tg.CircleButton)obj).FontSize; }
    public override void Set(global::Uno.UX.PropertyObject obj, int v, global::Uno.UX.IPropertyListener origin) { ((tg.CircleButton)obj).SetFontSize(v, origin); }
    public override bool SupportsOriginSetter { get { return true; } }
}
sealed class TG18_tgButton_Text_Property: Uno.UX.Property<string>
{
    [Uno.WeakReference] readonly tg.Button _obj;
    public TG18_tgButton_Text_Property(tg.Button obj, global::Uno.UX.Selector name) : base(name) { _obj = obj; }
    public override global::Uno.UX.PropertyObject Object { get { return _obj; } }
    public override string Get(global::Uno.UX.PropertyObject obj) { return ((tg.Button)obj).Text; }
    public override void Set(global::Uno.UX.PropertyObject obj, string v, global::Uno.UX.IPropertyListener origin) { ((tg.Button)obj).SetText(v, origin); }
    public override bool SupportsOriginSetter { get { return true; } }
}
sealed class TG18_tgButton_Font_Property: Uno.UX.Property<Fuse.Font>
{
    [Uno.WeakReference] readonly tg.Button _obj;
    public TG18_tgButton_Font_Property(tg.Button obj, global::Uno.UX.Selector name) : base(name) { _obj = obj; }
    public override global::Uno.UX.PropertyObject Object { get { return _obj; } }
    public override Fuse.Font Get(global::Uno.UX.PropertyObject obj) { return ((tg.Button)obj).Font; }
    public override void Set(global::Uno.UX.PropertyObject obj, Fuse.Font v, global::Uno.UX.IPropertyListener origin) { ((tg.Button)obj).SetFont(v, origin); }
    public override bool SupportsOriginSetter { get { return true; } }
}
sealed class TG18_tgButton_FontSize_Property: Uno.UX.Property<int>
{
    [Uno.WeakReference] readonly tg.Button _obj;
    public TG18_tgButton_FontSize_Property(tg.Button obj, global::Uno.UX.Selector name) : base(name) { _obj = obj; }
    public override global::Uno.UX.PropertyObject Object { get { return _obj; } }
    public override int Get(global::Uno.UX.PropertyObject obj) { return ((tg.Button)obj).FontSize; }
    public override void Set(global::Uno.UX.PropertyObject obj, int v, global::Uno.UX.IPropertyListener origin) { ((tg.Button)obj).SetFontSize(v, origin); }
    public override bool SupportsOriginSetter { get { return true; } }
}
