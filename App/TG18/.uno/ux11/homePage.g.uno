[Uno.Compiler.UxGenerated]
public partial class homePage: Fuse.Controls.Page
{
    [Uno.Compiler.UxGenerated]
    public partial class Template: Uno.UX.Template
    {
        [Uno.WeakReference] internal readonly homePage __parent;
        [Uno.WeakReference] internal readonly homePage __parentInstance;
        public Template(homePage parent, homePage parentInstance): base(null, false)
        {
            __parent = parent;
            __parentInstance = parentInstance;
        }
        global::Uno.UX.Property<Fuse.Visual> temp_Target_inst;
<<<<<<< HEAD
        global::Uno.UX.Property<string> temp1_Message_inst;
=======
>>>>>>> 10b490d17f581411dec90f73b2587559addec886
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
            var temp = new global::Fuse.Navigation.NavigateTo();
            temp_Target_inst = new TG18_FuseNavigationNavigateTo_Target_Property(temp, __selector0);
<<<<<<< HEAD
            var temp2 = new global::Fuse.Reactive.Data("navReference");
            __g_nametable = new global::Uno.UX.NameTable(__parent.__g_nametable, __g_static_nametable);
            var temp1 = new global::Fuse.Triggers.Actions.DebugAction();
            temp1_Message_inst = new TG18_FuseTriggersActionsDebugAction_Message_Property(temp1, __selector1);
            var temp3 = new global::Fuse.Reactive.Data("navReference");
            __self_Text_inst = new TG18_customButton_Text_Property(__self, __selector2);
            var temp4 = new global::Fuse.Reactive.Data("name");
            var temp5 = new global::Fuse.Reactive.Data("colorPalette");
            var temp6 = new global::Fuse.Reactive.Member(temp5, "mdBlack");
            __self_TextColor_inst = new TG18_customButton_TextColor_Property(__self, __selector3);
            var temp7 = new global::Fuse.Reactive.Member(temp6, "code");
            var temp8 = new global::Fuse.Gestures.Clicked();
            var temp9 = new global::Fuse.Reactive.DataBinding(temp_Target_inst, temp2, __g_nametable, Fuse.Reactive.BindingMode.Default);
            var temp10 = new global::Fuse.Reactive.DataBinding(temp1_Message_inst, temp3, __g_nametable, Fuse.Reactive.BindingMode.Default);
            var temp11 = new global::Fuse.Reactive.DataBinding(__self_Text_inst, temp4, __g_nametable, Fuse.Reactive.BindingMode.Default);
            var temp12 = new global::Fuse.Reactive.DataBinding(__self_TextColor_inst, temp7, __g_nametable, Fuse.Reactive.BindingMode.Default);
=======
            var temp1 = new global::Fuse.Reactive.Data("navReference");
            __g_nametable = new global::Uno.UX.NameTable(__parent.__g_nametable, __g_static_nametable);
            __self_Text_inst = new TG18_customButton_Text_Property(__self, __selector1);
            var temp2 = new global::Fuse.Reactive.Data("name");
            var temp3 = new global::Fuse.Reactive.Data("colorPalette");
            var temp4 = new global::Fuse.Reactive.Member(temp3, "mdBlack");
            __self_TextColor_inst = new TG18_customButton_TextColor_Property(__self, __selector2);
            var temp5 = new global::Fuse.Reactive.Member(temp4, "code");
            var temp6 = new global::Fuse.Gestures.Clicked();
            var temp7 = new global::Fuse.Reactive.DataBinding(temp_Target_inst, temp1, __g_nametable, Fuse.Reactive.BindingMode.Default);
            var temp8 = new global::Fuse.Reactive.DataBinding(__self_Text_inst, temp2, __g_nametable, Fuse.Reactive.BindingMode.Default);
            var temp9 = new global::Fuse.Reactive.DataBinding(__self_TextColor_inst, temp5, __g_nametable, Fuse.Reactive.BindingMode.Default);
>>>>>>> 10b490d17f581411dec90f73b2587559addec886
            __self.Aspect = 3f;
            __self.Width = new Uno.UX.Size(75f, Uno.UX.Unit.Percent);
            __self.BoxSizing = Fuse.Elements.Element.BoxSizingMode.FillAspect;
            __self.FontSize = 28;
<<<<<<< HEAD
            temp8.Actions.Add(temp);
            temp8.Actions.Add(temp1);
            temp8.Bindings.Add(temp9);
            temp8.Bindings.Add(temp10);
            __self.Children.Add(temp8);
            __self.Bindings.Add(temp11);
            __self.Bindings.Add(temp12);
            return __self;
        }
        static global::Uno.UX.Selector __selector0 = "Target";
        static global::Uno.UX.Selector __selector1 = "Message";
        static global::Uno.UX.Selector __selector2 = "Text";
        static global::Uno.UX.Selector __selector3 = "TextColor";
    }
    global::Uno.UX.Property<object> temp_Items_inst;
=======
            temp6.Actions.Add(temp);
            temp6.Bindings.Add(temp7);
            __self.Children.Add(temp6);
            __self.Bindings.Add(temp8);
            __self.Bindings.Add(temp9);
            return __self;
        }
        static global::Uno.UX.Selector __selector0 = "Target";
        static global::Uno.UX.Selector __selector1 = "Text";
        static global::Uno.UX.Selector __selector2 = "TextColor";
    }
    global::Uno.UX.Property<float4> temp_TextColor_inst;
    global::Uno.UX.Property<float4> temp1_Color_inst;
    global::Uno.UX.Property<object> temp2_Items_inst;
>>>>>>> 10b490d17f581411dec90f73b2587559addec886
    global::Uno.UX.NameTable __g_nametable;
    static string[] __g_static_nametable = new string[] {
    };
    static homePage()
    {
    }
    [global::Uno.UX.UXConstructor]
    public homePage()
    {
        InitializeUX();
    }
    void InitializeUX()
    {
        __g_nametable = new global::Uno.UX.NameTable(null, __g_static_nametable);
<<<<<<< HEAD
        var temp = new global::Fuse.Reactive.Each();
        temp_Items_inst = new TG18_FuseReactiveEach_Items_Property(temp, __selector0);
        var temp1 = new global::Fuse.Reactive.Data("pagesArray");
        var temp2 = new global::Fuse.Reactive.JavaScript(__g_nametable);
        var temp3 = new global::Fuse.Controls.StackPanel();
        var temp4 = new Template(this, this);
        var temp5 = new global::Fuse.Reactive.DataBinding(temp_Items_inst, temp1, __g_nametable, Fuse.Reactive.BindingMode.Default);
        this.Name = __selector1;
        temp2.LineNumber = 2;
        temp2.FileName = "Pages/homePage.ux";
        temp2.File = new global::Uno.UX.BundleFileSource(import global::Uno.IO.BundleFile("../../Pages/homePage.js"));
        temp3.Children.Add(temp);
        temp.Offset = 0;
        temp.Templates.Add(temp4);
        temp.Bindings.Add(temp5);
        __g_nametable.This = this;
        this.Children.Add(temp2);
        this.Children.Add(temp3);
    }
    static global::Uno.UX.Selector __selector0 = "Items";
    static global::Uno.UX.Selector __selector1 = "homePage";
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
        var temp9 = new global::Fuse.Reactive.Data("pagesArray");
        var temp10 = new global::Fuse.Reactive.JavaScript(__g_nametable);
        var temp11 = new global::Fuse.Controls.StackPanel();
        var temp12 = new global::Fuse.Controls.StackPanel();
        var temp13 = new global::Fuse.Reactive.DataBinding(temp_TextColor_inst, temp5, __g_nametable, Fuse.Reactive.BindingMode.Default);
        var temp14 = new global::Fuse.Reactive.DataBinding(temp1_Color_inst, temp8, __g_nametable, Fuse.Reactive.BindingMode.Default);
        var temp15 = new Template(this, this);
        var temp16 = new global::Fuse.Reactive.DataBinding(temp2_Items_inst, temp9, __g_nametable, Fuse.Reactive.BindingMode.Default);
        this.Name = __selector3;
        temp10.LineNumber = 2;
        temp10.FileName = "Pages/homePage.ux";
        temp10.File = new global::Uno.UX.BundleFileSource(import global::Uno.IO.BundleFile("../../Pages/homePage.js"));
        temp11.Children.Add(temp12);
        temp11.Children.Add(temp2);
        global::Fuse.Controls.DockPanel.SetDock(temp12, Fuse.Layouts.Dock.Top);
        temp12.Children.Add(temp1);
        temp1.Height = new Uno.UX.Size(45f, Uno.UX.Unit.Unspecified);
        temp1.Children.Add(temp);
        temp1.Bindings.Add(temp14);
        temp.Value = "Hjem";
        temp.FontSize = 22f;
        temp.Alignment = Fuse.Elements.Alignment.Center;
        temp.Bindings.Add(temp13);
        temp2.Offset = 1;
        temp2.Templates.Add(temp15);
        temp2.Bindings.Add(temp16);
        __g_nametable.This = this;
        this.Children.Add(temp10);
        this.Children.Add(temp11);
    }
    static global::Uno.UX.Selector __selector0 = "TextColor";
    static global::Uno.UX.Selector __selector1 = "Color";
    static global::Uno.UX.Selector __selector2 = "Items";
    static global::Uno.UX.Selector __selector3 = "homePage";
>>>>>>> 10b490d17f581411dec90f73b2587559addec886
}
