[Uno.Compiler.UxGenerated]
public partial class lightControlPage: Fuse.Controls.Page
{
    [Uno.Compiler.UxGenerated]
    public partial class Template: Uno.UX.Template
    {
        [Uno.WeakReference] internal readonly lightControlPage __parent;
        [Uno.WeakReference] internal readonly lightControlPage __parentInstance;
        public Template(lightControlPage parent, lightControlPage parentInstance): base(null, false)
        {
            __parent = parent;
            __parentInstance = parentInstance;
        }
        global::Uno.UX.Property<string> temp_Value_inst;
        global::Uno.UX.Property<float4> temp_Color_inst;
        global::Uno.UX.Property<float4> temp1_Color_inst;
        global::Uno.UX.NameTable __g_nametable;
        static string[] __g_static_nametable = new string[] {
        };
        static Template()
        {
        }
        public override object New()
        {
            var __self = new global::Fuse.Controls.Circle();
            var temp = new global::tBuilt();
            temp_Value_inst = new TG18_FuseControlsTextControl_Value_Property(temp, __selector0);
            var temp2 = new global::Fuse.Reactive.Data("text");
            __g_nametable = new global::Uno.UX.NameTable(__parent.__g_nametable, __g_static_nametable);
            temp_Color_inst = new TG18_FuseControlsTextControl_Color_Property(temp, __selector1);
            var temp3 = new global::Fuse.Reactive.Data("textColor");
            var temp1 = new global::Fuse.Drawing.GradientStop();
            temp1_Color_inst = new TG18_FuseDrawingGradientStop_Color_Property(temp1, __selector1);
            var temp4 = new global::Fuse.Reactive.Data("color");
            var temp5 = new global::Fuse.Reactive.DataBinding(temp_Value_inst, temp2, __g_nametable, Fuse.Reactive.BindingMode.Default);
            var temp6 = new global::Fuse.Reactive.DataBinding(temp_Color_inst, temp3, __g_nametable, Fuse.Reactive.BindingMode.Default);
            var temp7 = new global::Fuse.Drawing.LinearGradient();
            var temp8 = new global::Fuse.Drawing.GradientStop();
            var temp9 = new global::Fuse.Reactive.DataBinding(temp1_Color_inst, temp4, __g_nametable, Fuse.Reactive.BindingMode.Default);
            __self.Height = new Uno.UX.Size(80f, Uno.UX.Unit.Unspecified);
            temp.FontSize = 26f;
            temp.Alignment = Fuse.Elements.Alignment.Center;
            temp.Bindings.Add(temp5);
            temp.Bindings.Add(temp6);
            temp7.AngleDegrees = 120f;
            temp7.Stops.Add(temp1);
            temp7.Stops.Add(temp8);
            temp1.Offset = 0.4f;
            temp8.Offset = 1f;
            temp8.Color = float4(0.1333333f, 0.1333333f, 0.1333333f, 1f);
            __self.Fills.Add(temp7);
            __self.Children.Add(temp);
            __self.Bindings.Add(temp9);
            return __self;
        }
        static global::Uno.UX.Selector __selector0 = "Value";
        static global::Uno.UX.Selector __selector1 = "Color";
    }
    global::Uno.UX.Property<object> temp_Items_inst;
    global::Uno.UX.NameTable __g_nametable;
    static string[] __g_static_nametable = new string[] {
    };
    static lightControlPage()
    {
    }
    [global::Uno.UX.UXConstructor]
    public lightControlPage()
    {
        InitializeUX();
    }
    void InitializeUX()
    {
        __g_nametable = new global::Uno.UX.NameTable(null, __g_static_nametable);
        var temp = new global::Fuse.Reactive.Each();
        temp_Items_inst = new TG18_FuseReactiveEach_Items_Property(temp, __selector0);
        var temp1 = new global::Fuse.Reactive.Data("buttons");
        var temp2 = new global::Fuse.Reactive.JavaScript(__g_nametable);
        var temp3 = new global::Fuse.Controls.Panel();
        var temp4 = new global::Fuse.Drawing.LinearGradient();
        var temp5 = new global::Fuse.Drawing.GradientStop();
        var temp6 = new global::Fuse.Drawing.GradientStop();
        var temp7 = new global::Fuse.Controls.Grid();
        var temp8 = new Template(this, this);
        var temp9 = new global::Fuse.Reactive.DataBinding(temp_Items_inst, temp1, __g_nametable, Fuse.Reactive.BindingMode.Default);
        this.Name = __selector1;
        temp2.LineNumber = 2;
        temp2.FileName = "Pages/lightControlPage.ux";
        temp2.File = new global::Uno.UX.BundleFileSource(import global::Uno.IO.BundleFile("../../../../../Pages/lightControlPage.js"));
        temp3.Background = temp4;
        temp3.Children.Add(temp7);
        temp4.AngleDegrees = 100f;
        temp4.Stops.Add(temp5);
        temp4.Stops.Add(temp6);
        temp5.Offset = 0.4f;
        temp5.Color = float4(0.6117647f, 0.772549f, 0.1686275f, 1f);
        temp6.Offset = 1f;
        temp6.Color = float4(0.1333333f, 0.3215686f, 0.1921569f, 1f);
        temp7.RowCount = 6;
        temp7.ColumnCount = 4;
        temp7.Children.Add(temp);
        temp.Templates.Add(temp8);
        temp.Bindings.Add(temp9);
        __g_nametable.This = this;
        this.Children.Add(temp2);
        this.Children.Add(temp3);
    }
    static global::Uno.UX.Selector __selector0 = "Items";
    static global::Uno.UX.Selector __selector1 = "lightControlPage";
}
