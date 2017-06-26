[Uno.Compiler.UxGenerated]
public partial class pcControlPage: Fuse.Controls.Page
{
    [Uno.Compiler.UxGenerated]
    public partial class Template: Uno.UX.Template
    {
        [Uno.WeakReference] internal readonly pcControlPage __parent;
        [Uno.WeakReference] internal readonly pcControlPage __parentInstance;
        public Template(pcControlPage parent, pcControlPage parentInstance): base(null, false)
        {
            __parent = parent;
            __parentInstance = parentInstance;
        }
        global::Uno.UX.Property<string> __self_Text_inst;
        global::Uno.UX.Property<float4> __self_TextColor_inst;
        global::Uno.UX.NameTable __g_nametable;
        static string[] __g_static_nametable = new string[] {
        };
        static Template()
        {
        }
        public override object New()
        {
            var __self = new global::customButton();
            __self_Text_inst = new TG18_customButton_Text_Property(__self, __selector0);
            var temp = new global::Fuse.Reactive.Data("text");
            __g_nametable = new global::Uno.UX.NameTable(__parent.__g_nametable, __g_static_nametable);
            __self_TextColor_inst = new TG18_customButton_TextColor_Property(__self, __selector1);
            var temp1 = new global::Fuse.Reactive.Data("textColor");
            var temp2 = new global::Fuse.Reactive.DataBinding(__self_Text_inst, temp, __g_nametable, Fuse.Reactive.BindingMode.Default);
            var temp3 = new global::Fuse.Reactive.DataBinding(__self_TextColor_inst, temp1, __g_nametable, Fuse.Reactive.BindingMode.Default);
            __self.Aspect = 1f;
            __self.Width = new Uno.UX.Size(50f, Uno.UX.Unit.Percent);
            __self.BoxSizing = Fuse.Elements.Element.BoxSizingMode.FillAspect;
            __self.FontSize = 36;
            __self.Bindings.Add(temp2);
            __self.Bindings.Add(temp3);
            return __self;
        }
        static global::Uno.UX.Selector __selector0 = "Text";
        static global::Uno.UX.Selector __selector1 = "TextColor";
    }
<<<<<<< HEAD
    global::Uno.UX.Property<object> temp_Items_inst;
=======
    global::Uno.UX.Property<float4> temp_TextColor_inst;
    global::Uno.UX.Property<float4> temp1_Color_inst;
    global::Uno.UX.Property<object> temp2_Items_inst;
>>>>>>> 10b490d17f581411dec90f73b2587559addec886
    global::Uno.UX.NameTable __g_nametable;
    static string[] __g_static_nametable = new string[] {
    };
    static pcControlPage()
    {
    }
    [global::Uno.UX.UXConstructor]
    public pcControlPage()
    {
        InitializeUX();
    }
    void InitializeUX()
    {
        __g_nametable = new global::Uno.UX.NameTable(null, __g_static_nametable);
<<<<<<< HEAD
        var temp = new global::Fuse.Reactive.Each();
        temp_Items_inst = new TG18_FuseReactiveEach_Items_Property(temp, __selector0);
        var temp1 = new global::Fuse.Reactive.Data("pcControlButtons");
        var temp2 = new global::Fuse.Reactive.JavaScript(__g_nametable);
        var temp3 = new global::Fuse.Controls.Panel();
        var temp4 = new global::Fuse.Controls.StackPanel();
        var temp5 = new Template(this, this);
        var temp6 = new global::Fuse.Reactive.DataBinding(temp_Items_inst, temp1, __g_nametable, Fuse.Reactive.BindingMode.Default);
        this.Name = __selector1;
        temp2.LineNumber = 2;
        temp2.FileName = "Pages/pcControlPage.ux";
        temp2.File = new global::Uno.UX.BundleFileSource(import global::Uno.IO.BundleFile("../../Pages/pcControlPage.js"));
        temp3.Children.Add(temp4);
        temp4.Alignment = Fuse.Elements.Alignment.VerticalCenter;
        temp4.Children.Add(temp);
        temp.Templates.Add(temp5);
        temp.Bindings.Add(temp6);
        __g_nametable.This = this;
        this.Children.Add(temp2);
        this.Children.Add(temp3);
    }
    static global::Uno.UX.Selector __selector0 = "Items";
    static global::Uno.UX.Selector __selector1 = "pcControlPage";
=======
        var temp3 = new global::Fuse.Reactive.Data("colorPalette");
        var temp4 = new global::Fuse.Reactive.Member(temp3, "mdWhite");
        var temp = new global::Fuse.Controls.Text();
        temp_TextColor_inst = new TG18_FuseControlsTextControl_TextColor_Property(temp, __selector0);
        var temp5 = new global::Fuse.Reactive.Member(temp4, "code");
        var temp6 = new global::Fuse.Reactive.Data("colorPalette");
        var temp7 = new global::Fuse.Reactive.Member(temp6, "mdRed");
        var temp1 = new global::Fuse.Controls.Panel();
        temp1_Color_inst = new TG18_FuseControlsPanel_Color_Property(temp1, __selector1);
        var temp8 = new global::Fuse.Reactive.Member(temp7, "code");
        var temp2 = new global::Fuse.Reactive.Each();
        temp2_Items_inst = new TG18_FuseReactiveEach_Items_Property(temp2, __selector2);
        var temp9 = new global::Fuse.Reactive.Data("pcControlButtons");
        var temp10 = new global::Fuse.Reactive.JavaScript(__g_nametable);
        var temp11 = new global::Fuse.Controls.Panel();
        var temp12 = new global::Fuse.Controls.StackPanel();
        var temp13 = new global::Fuse.Reactive.DataBinding(temp_TextColor_inst, temp5, __g_nametable, Fuse.Reactive.BindingMode.Default);
        var temp14 = new global::Fuse.Reactive.DataBinding(temp1_Color_inst, temp8, __g_nametable, Fuse.Reactive.BindingMode.Default);
        var temp15 = new global::Fuse.Controls.StackPanel();
        var temp16 = new Template(this, this);
        var temp17 = new global::Fuse.Reactive.DataBinding(temp2_Items_inst, temp9, __g_nametable, Fuse.Reactive.BindingMode.Default);
        this.Name = __selector3;
        temp10.LineNumber = 2;
        temp10.FileName = "Pages/pcControlPage.ux";
        temp10.File = new global::Uno.UX.BundleFileSource(import global::Uno.IO.BundleFile("../../Pages/pcControlPage.js"));
        temp11.Children.Add(temp12);
        temp11.Children.Add(temp15);
        global::Fuse.Controls.DockPanel.SetDock(temp12, Fuse.Layouts.Dock.Top);
        temp12.Children.Add(temp1);
        temp1.Height = new Uno.UX.Size(45f, Uno.UX.Unit.Unspecified);
        temp1.Children.Add(temp);
        temp1.Bindings.Add(temp14);
        temp.Value = "PC-behandling";
        temp.FontSize = 22f;
        temp.Alignment = Fuse.Elements.Alignment.Center;
        temp.Bindings.Add(temp13);
        temp15.Alignment = Fuse.Elements.Alignment.VerticalCenter;
        temp15.Children.Add(temp2);
        temp2.Templates.Add(temp16);
        temp2.Bindings.Add(temp17);
        __g_nametable.This = this;
        this.Children.Add(temp10);
        this.Children.Add(temp11);
    }
    static global::Uno.UX.Selector __selector0 = "TextColor";
    static global::Uno.UX.Selector __selector1 = "Color";
    static global::Uno.UX.Selector __selector2 = "Items";
    static global::Uno.UX.Selector __selector3 = "pcControlPage";
>>>>>>> 10b490d17f581411dec90f73b2587559addec886
}
