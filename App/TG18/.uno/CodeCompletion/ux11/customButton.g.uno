[Uno.Compiler.UxGenerated]
public partial class customButton: Fuse.Controls.Panel
{
    string _field_Text;
    [global::Uno.UX.UXOriginSetter("SetText")]
    public string Text
    {
        get { return _field_Text; }
        set { SetText(value, null); }
    }
    public void SetText(string value, global::Uno.UX.IPropertyListener origin)
    {
        if (value != _field_Text)
        {
            _field_Text = value;
            OnPropertyChanged("Text", origin);
        }
    }
    float4 _field_TextColor;
    [global::Uno.UX.UXOriginSetter("SetTextColor")]
    public float4 TextColor
    {
        get { return _field_TextColor; }
        set { SetTextColor(value, null); }
    }
    public void SetTextColor(float4 value, global::Uno.UX.IPropertyListener origin)
    {
        if (value != _field_TextColor)
        {
            _field_TextColor = value;
            OnPropertyChanged("TextColor", origin);
        }
    }
    int _field_FontSize;
    [global::Uno.UX.UXOriginSetter("SetFontSize")]
    public int FontSize
    {
        get { return _field_FontSize; }
        set { SetFontSize(value, null); }
    }
    public void SetFontSize(int value, global::Uno.UX.IPropertyListener origin)
    {
        if (value != _field_FontSize)
        {
            _field_FontSize = value;
            OnPropertyChanged("FontSize", origin);
        }
    }
    global::Uno.UX.Property<string> temp_Value_inst;
    global::Uno.UX.Property<float> temp_FontSize_inst;
    global::Uno.UX.Property<float4> temp_Color_inst;
    global::Uno.UX.Property<float4> temp1_Color_inst;
    global::Uno.UX.Property<float4> temp2_Color_inst;
    global::Uno.UX.Property<string> this_Text_inst;
    global::Uno.UX.Property<float4> this_TextColor_inst;
    global::Uno.UX.Property<int> this_FontSize_inst;
    global::Uno.UX.NameTable __g_nametable;
    static string[] __g_static_nametable = new string[] {
    };
    static customButton()
    {
    }
    [global::Uno.UX.UXConstructor]
    public customButton()
    {
        InitializeUX();
    }
    void InitializeUX()
    {
        var temp3 = new global::Fuse.Reactive.Constant(this);
        var temp = new global::tBuilt();
        temp_Value_inst = new TG18_FuseControlsTextControl_Value_Property(temp, __selector0);
        var temp4 = new global::Fuse.Reactive.Property(temp3, TG18_accessor_customButton_Text.Singleton);
        this_Text_inst = new TG18_customButton_Text_Property(this, __selector1);
        this_TextColor_inst = new TG18_customButton_TextColor_Property(this, __selector2);
        this_FontSize_inst = new TG18_customButton_FontSize_Property(this, __selector3);
        __g_nametable = new global::Uno.UX.NameTable(null, __g_static_nametable);
        var temp5 = new global::Fuse.Reactive.Constant(this);
        temp_FontSize_inst = new TG18_FuseControlsTextControl_FontSize_Property(temp, __selector3);
        var temp6 = new global::Fuse.Reactive.Property(temp5, TG18_accessor_customButton_FontSize.Singleton);
        var temp7 = new global::Fuse.Reactive.Constant(this);
        temp_Color_inst = new TG18_FuseControlsTextControl_Color_Property(temp, __selector4);
        var temp8 = new global::Fuse.Reactive.Property(temp7, TG18_accessor_customButton_TextColor.Singleton);
        var temp9 = new global::Fuse.Reactive.Data("colorPalette");
        var temp10 = new global::Fuse.Reactive.Member(temp9, "grey");
        var temp11 = new global::Fuse.Reactive.Data("colorPalette");
        var temp12 = new global::Fuse.Reactive.Member(temp11, "mdBlack");
        var temp1 = new global::Fuse.Drawing.GradientStop();
        temp1_Color_inst = new TG18_FuseDrawingGradientStop_Color_Property(temp1, __selector4);
        var temp13 = new global::Fuse.Reactive.Member(temp10, "code");
        var temp2 = new global::Fuse.Drawing.GradientStop();
        temp2_Color_inst = new TG18_FuseDrawingGradientStop_Color_Property(temp2, __selector4);
        var temp14 = new global::Fuse.Reactive.Member(temp12, "code");
        var temp15 = new global::Fuse.Reactive.DataBinding(temp_Value_inst, temp4, __g_nametable, Fuse.Reactive.BindingMode.Read);
        var temp16 = new global::Fuse.Reactive.DataBinding(temp_FontSize_inst, temp6, __g_nametable, Fuse.Reactive.BindingMode.Read);
        var temp17 = new global::Fuse.Reactive.DataBinding(temp_Color_inst, temp8, __g_nametable, Fuse.Reactive.BindingMode.Read);
        var temp18 = new global::Fuse.Drawing.LinearGradient();
        var temp19 = new global::Fuse.Controls.Shadow();
        var temp20 = new global::Fuse.Gestures.WhilePressed();
        var temp21 = new global::Fuse.Animations.Scale();
        var temp22 = new global::Fuse.Reactive.DataBinding(temp1_Color_inst, temp13, __g_nametable, Fuse.Reactive.BindingMode.Default);
        var temp23 = new global::Fuse.Reactive.DataBinding(temp2_Color_inst, temp14, __g_nametable, Fuse.Reactive.BindingMode.Default);
        this.Margin = float4(4f, 4f, 4f, 4f);
        this.Name = __selector5;
        temp.Alignment = Fuse.Elements.Alignment.Center;
        temp.Bindings.Add(temp15);
        temp.Bindings.Add(temp16);
        temp.Bindings.Add(temp17);
        temp18.AngleDegrees = 120f;
        temp18.Stops.Add(temp1);
        temp18.Stops.Add(temp2);
        temp1.Offset = 0.4f;
        temp2.Offset = 1f;
        temp19.Angle = 70f;
        temp19.Size = 5f;
        temp20.Animators.Add(temp21);
        temp21.Factor = 1.05f;
        temp21.Duration = 0.1;
        temp21.DurationBack = 0.15;
        __g_nametable.This = this;
        __g_nametable.Properties.Add(this_Text_inst);
        __g_nametable.Properties.Add(this_TextColor_inst);
        __g_nametable.Properties.Add(this_FontSize_inst);
        this.Background = temp18;
        this.Children.Add(temp);
        this.Children.Add(temp19);
        this.Children.Add(temp20);
        this.Bindings.Add(temp22);
        this.Bindings.Add(temp23);
    }
    static global::Uno.UX.Selector __selector0 = "Value";
    static global::Uno.UX.Selector __selector1 = "Text";
    static global::Uno.UX.Selector __selector2 = "TextColor";
    static global::Uno.UX.Selector __selector3 = "FontSize";
    static global::Uno.UX.Selector __selector4 = "Color";
    static global::Uno.UX.Selector __selector5 = "customButton";
}
