[Uno.Compiler.UxGenerated]
public partial class ControlPage: Fuse.Controls.Page
{
    float4 _field_HeaderColor;
    [global::Uno.UX.UXOriginSetter("SetHeaderColor")]
    public float4 HeaderColor
    {
        get { return _field_HeaderColor; }
        set { SetHeaderColor(value, null); }
    }
    public void SetHeaderColor(float4 value, global::Uno.UX.IPropertyListener origin)
    {
        if (value != _field_HeaderColor)
        {
            _field_HeaderColor = value;
            OnPropertyChanged("HeaderColor", origin);
        }
    }
    float4 _field_HeaderTextColor;
    [global::Uno.UX.UXOriginSetter("SetHeaderTextColor")]
    public float4 HeaderTextColor
    {
        get { return _field_HeaderTextColor; }
        set { SetHeaderTextColor(value, null); }
    }
    public void SetHeaderTextColor(float4 value, global::Uno.UX.IPropertyListener origin)
    {
        if (value != _field_HeaderTextColor)
        {
            _field_HeaderTextColor = value;
            OnPropertyChanged("HeaderTextColor", origin);
        }
    }
    global::Uno.UX.Property<string> temp_Value_inst;
    global::Uno.UX.Property<float4> temp_TextColor_inst;
    global::Uno.UX.Property<float4> temp1_Color_inst;
    global::Uno.UX.Property<float4> this_HeaderColor_inst;
    global::Uno.UX.Property<float4> this_HeaderTextColor_inst;
    global::Uno.UX.NameTable __g_nametable;
    static string[] __g_static_nametable = new string[] {
    };
    static ControlPage()
    {
    }
    [global::Uno.UX.UXConstructor]
    public ControlPage()
    {
        InitializeUX();
    }
    void InitializeUX()
    {
        var temp2 = new global::Fuse.Reactive.Constant(this);
        var temp = new global::Fuse.Controls.Text();
        temp_Value_inst = new TG18_FuseControlsTextControl_Value_Property(temp, __selector0);
        var temp3 = new global::Fuse.Reactive.Property(temp2, TG18_accessor_Fuse_Controls_Page_Title.Singleton);
        this_HeaderColor_inst = new TG18_ControlPage_HeaderColor_Property(this, __selector1);
        this_HeaderTextColor_inst = new TG18_ControlPage_HeaderTextColor_Property(this, __selector2);
        __g_nametable = new global::Uno.UX.NameTable(null, __g_static_nametable);
        var temp4 = new global::Fuse.Reactive.Constant(this);
        temp_TextColor_inst = new TG18_FuseControlsTextControl_TextColor_Property(temp, __selector3);
        var temp5 = new global::Fuse.Reactive.Property(temp4, TG18_accessor_ControlPage_HeaderTextColor.Singleton);
        var temp6 = new global::Fuse.Reactive.Constant(this);
        var temp1 = new global::Fuse.Controls.Panel();
        temp1_Color_inst = new TG18_FuseControlsPanel_Color_Property(temp1, __selector4);
        var temp7 = new global::Fuse.Reactive.Property(temp6, TG18_accessor_ControlPage_HeaderColor.Singleton);
        var temp8 = new global::Fuse.Layouts.DefaultLayout();
        var temp9 = new global::Fuse.Controls.StackPanel();
        var temp10 = new global::Fuse.Reactive.DataBinding(temp_Value_inst, temp3, __g_nametable, Fuse.Reactive.BindingMode.Default);
        var temp11 = new global::Fuse.Reactive.DataBinding(temp_TextColor_inst, temp5, __g_nametable, Fuse.Reactive.BindingMode.Default);
        var temp12 = new global::Fuse.Reactive.DataBinding(temp1_Color_inst, temp7, __g_nametable, Fuse.Reactive.BindingMode.Default);
        this.HitTestMode = Fuse.Elements.HitTestMode.LocalBoundsAndChildren;
        this.Name = __selector5;
        global::Fuse.Controls.DockPanel.SetDock(temp9, Fuse.Layouts.Dock.Top);
        temp9.Children.Add(temp1);
        temp1.Height = new Uno.UX.Size(45f, Uno.UX.Unit.Unspecified);
        temp1.Children.Add(temp);
        temp1.Bindings.Add(temp12);
        temp.FontSize = 22f;
        temp.Alignment = Fuse.Elements.Alignment.Center;
        temp.Bindings.Add(temp10);
        temp.Bindings.Add(temp11);
        __g_nametable.This = this;
        __g_nametable.Properties.Add(this_HeaderColor_inst);
        __g_nametable.Properties.Add(this_HeaderTextColor_inst);
        this.Layout = temp8;
        this.Children.Add(temp9);
    }
    static global::Uno.UX.Selector __selector0 = "Value";
    static global::Uno.UX.Selector __selector1 = "HeaderColor";
    static global::Uno.UX.Selector __selector2 = "HeaderTextColor";
    static global::Uno.UX.Selector __selector3 = "TextColor";
    static global::Uno.UX.Selector __selector4 = "Color";
    static global::Uno.UX.Selector __selector5 = "self";
}
