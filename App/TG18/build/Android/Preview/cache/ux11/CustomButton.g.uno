[Uno.Compiler.UxGenerated]
public partial class CustomButton: Fuse.Controls.Panel
{
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
    global::Uno.UX.Property<string> temp_Value_inst;
    global::Uno.UX.Property<float4> temp_Color_inst;
    global::Uno.UX.Property<float4> this_Color_inst;
    global::Uno.UX.Property<float4> this_TextColor_inst;
    global::Uno.UX.Property<string> this_Text_inst;
    global::Uno.UX.NameTable __g_nametable;
    static string[] __g_static_nametable = new string[] {
    };
    static CustomButton()
    {
    }
    [global::Uno.UX.UXConstructor]
    public CustomButton()
    {
        InitializeUX();
    }
    void InitializeUX()
    {
        var temp1 = new global::Fuse.Reactive.Constant(this);
        var temp = new global::TBuilt();
        temp_Value_inst = new TG18_FuseControlsTextControl_Value_Property(temp, __selector0);
        var temp2 = new global::Fuse.Reactive.Property(temp1, TG18_accessor_CustomButton_Text.Singleton);
        this_TextColor_inst = new TG18_CustomButton_TextColor_Property(this, __selector1);
        this_Text_inst = new TG18_CustomButton_Text_Property(this, __selector2);
        __g_nametable = new global::Uno.UX.NameTable(null, __g_static_nametable);
        var temp3 = new global::Fuse.Reactive.Constant(this);
        temp_Color_inst = new TG18_FuseControlsTextControl_Color_Property(temp, __selector3);
        var temp4 = new global::Fuse.Reactive.Property(temp3, TG18_accessor_CustomButton_TextColor.Singleton);
        this_Color_inst = new TG18_FuseControlsPanel_Color_Property(this, __selector3);
        var temp5 = new global::Fuse.Reactive.DataBinding(temp_Value_inst, temp2, __g_nametable, Fuse.Reactive.BindingMode.Read);
        var temp6 = new global::Fuse.Reactive.DataBinding(temp_Color_inst, temp4, __g_nametable, Fuse.Reactive.BindingMode.Read);
        var temp7 = new global::Fuse.Gestures.WhilePressed();
        var temp8 = new global::Fuse.Animations.Change<float4>(this_Color_inst);
        this.Color = float4(0.1333333f, 0.3333333f, 0.6666667f, 1f);
        this.HitTestMode = Fuse.Elements.HitTestMode.LocalBounds;
        this.Margin = float4(4f, 4f, 4f, 4f);
        this.Name = __selector4;
        temp.FontSize = 72f;
        temp.Alignment = Fuse.Elements.Alignment.Center;
        temp.Margin = float4(30f, 15f, 30f, 15f);
        temp.Bindings.Add(temp5);
        temp.Bindings.Add(temp6);
        temp7.Animators.Add(temp8);
        temp8.Value = float4(0.06666667f, 0.2f, 0.5333334f, 1f);
        temp8.Duration = 0.05;
        temp8.DurationBack = 0.2;
        __g_nametable.This = this;
        __g_nametable.Properties.Add(this_TextColor_inst);
        __g_nametable.Properties.Add(this_Text_inst);
        this.Children.Add(temp);
        this.Children.Add(temp7);
    }
    static global::Uno.UX.Selector __selector0 = "Value";
    static global::Uno.UX.Selector __selector1 = "TextColor";
    static global::Uno.UX.Selector __selector2 = "Text";
    static global::Uno.UX.Selector __selector3 = "Color";
    static global::Uno.UX.Selector __selector4 = "self";
}
