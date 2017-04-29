[Uno.Compiler.UxGenerated]
public partial class PageWithTitle: Fuse.Controls.Page
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
    string _field_Instructions;
    [global::Uno.UX.UXOriginSetter("SetInstructions")]
    public string Instructions
    {
        get { return _field_Instructions; }
        set { SetInstructions(value, null); }
    }
    public void SetInstructions(string value, global::Uno.UX.IPropertyListener origin)
    {
        if (value != _field_Instructions)
        {
            _field_Instructions = value;
            OnPropertyChanged("Instructions", origin);
        }
    }
    global::Uno.UX.Property<string> temp_Value_inst;
    global::Uno.UX.Property<float4> temp_TextColor_inst;
    global::Uno.UX.Property<float4> temp1_Color_inst;
    global::Uno.UX.Property<string> temp2_Value_inst;
    global::Uno.UX.Property<float4> this_HeaderColor_inst;
    global::Uno.UX.Property<float4> this_HeaderTextColor_inst;
    global::Uno.UX.Property<string> this_Instructions_inst;
    global::Uno.UX.NameTable __g_nametable;
    static string[] __g_static_nametable = new string[] {
    };
    static PageWithTitle()
    {
    }
    [global::Uno.UX.UXConstructor]
    public PageWithTitle()
    {
        InitializeUX();
    }
    void InitializeUX()
    {
        var temp3 = new global::Fuse.Reactive.Constant(this);
        var temp = new global::Fuse.Controls.Text();
        temp_Value_inst = new TG18_FuseControlsTextControl_Value_Property(temp, __selector0);
        var temp4 = new global::Fuse.Reactive.Property(temp3, TG18_accessor_Fuse_Controls_Page_Title.Singleton);
        this_HeaderColor_inst = new TG18_PageWithTitle_HeaderColor_Property(this, __selector1);
        this_HeaderTextColor_inst = new TG18_PageWithTitle_HeaderTextColor_Property(this, __selector2);
        this_Instructions_inst = new TG18_PageWithTitle_Instructions_Property(this, __selector3);
        __g_nametable = new global::Uno.UX.NameTable(null, __g_static_nametable);
        var temp5 = new global::Fuse.Reactive.Constant(this);
        temp_TextColor_inst = new TG18_FuseControlsTextControl_TextColor_Property(temp, __selector4);
        var temp6 = new global::Fuse.Reactive.Property(temp5, TG18_accessor_PageWithTitle_HeaderTextColor.Singleton);
        var temp7 = new global::Fuse.Reactive.Constant(this);
        var temp1 = new global::Fuse.Controls.Panel();
        temp1_Color_inst = new TG18_FuseControlsPanel_Color_Property(temp1, __selector5);
        var temp8 = new global::Fuse.Reactive.Property(temp7, TG18_accessor_PageWithTitle_HeaderColor.Singleton);
        var temp9 = new global::Fuse.Reactive.Constant(this);
        var temp2 = new global::Fuse.Controls.Text();
        temp2_Value_inst = new TG18_FuseControlsTextControl_Value_Property(temp2, __selector0);
        var temp10 = new global::Fuse.Reactive.Property(temp9, TG18_accessor_PageWithTitle_Instructions.Singleton);
        var temp11 = new global::Fuse.Layouts.DockLayout();
        var temp12 = new global::Fuse.Controls.StackPanel();
        var temp13 = new global::Fuse.Reactive.DataBinding(temp_Value_inst, temp4, __g_nametable, Fuse.Reactive.BindingMode.Default);
        var temp14 = new global::Fuse.Reactive.DataBinding(temp_TextColor_inst, temp6, __g_nametable, Fuse.Reactive.BindingMode.Default);
        var temp15 = new global::Fuse.Reactive.DataBinding(temp1_Color_inst, temp8, __g_nametable, Fuse.Reactive.BindingMode.Default);
        var temp16 = new global::Fuse.Controls.Panel();
        var temp17 = new global::Fuse.Navigation.WhileActive();
        var temp18 = new global::Fuse.Animations.Move();
        var temp19 = new global::Fuse.Reactive.DataBinding(temp2_Value_inst, temp10, __g_nametable, Fuse.Reactive.BindingMode.Default);
        this.HitTestMode = Fuse.Elements.HitTestMode.LocalBoundsAndChildren;
        this.Name = __selector6;
        global::Fuse.Controls.DockPanel.SetDock(temp12, Fuse.Layouts.Dock.Top);
        temp12.Children.Add(temp1);
        temp1.Height = new Uno.UX.Size(45f, Uno.UX.Unit.Unspecified);
        temp1.Children.Add(temp);
        temp1.Bindings.Add(temp15);
        temp.FontSize = 22f;
        temp.Alignment = Fuse.Elements.Alignment.Center;
        temp.Bindings.Add(temp13);
        temp.Bindings.Add(temp14);
        temp16.Color = float4(0f, 0f, 0f, 0.5333334f);
        temp16.Height = new Uno.UX.Size(10f, Uno.UX.Unit.Percent);
        temp16.Alignment = Fuse.Elements.Alignment.Bottom;
        temp16.Children.Add(temp17);
        temp16.Children.Add(temp2);
        temp17.Threshold = 0.4f;
        temp17.Invert = true;
        temp17.Animators.Add(temp18);
        temp18.Y = 1f;
        temp18.Duration = 0.4;
        temp18.RelativeTo = Fuse.TranslationModes.Size;
        temp18.Easing = Fuse.Animations.Easing.CircularInOut;
        temp2.TextColor = float4(1f, 1f, 1f, 1f);
        temp2.Alignment = Fuse.Elements.Alignment.Center;
        temp2.Margin = float4(20f, 20f, 20f, 20f);
        temp2.Bindings.Add(temp19);
        __g_nametable.This = this;
        __g_nametable.Properties.Add(this_HeaderColor_inst);
        __g_nametable.Properties.Add(this_HeaderTextColor_inst);
        __g_nametable.Properties.Add(this_Instructions_inst);
        this.Layout = temp11;
        this.Children.Add(temp12);
        this.Children.Add(temp16);
    }
    static global::Uno.UX.Selector __selector0 = "Value";
    static global::Uno.UX.Selector __selector1 = "HeaderColor";
    static global::Uno.UX.Selector __selector2 = "HeaderTextColor";
    static global::Uno.UX.Selector __selector3 = "Instructions";
    static global::Uno.UX.Selector __selector4 = "TextColor";
    static global::Uno.UX.Selector __selector5 = "Color";
    static global::Uno.UX.Selector __selector6 = "self";
}
