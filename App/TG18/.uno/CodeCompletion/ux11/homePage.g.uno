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
        global::Uno.UX.Property<string> temp1_Message_inst;
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
            var __self = new global::tg.Button();
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
            __self_Text_inst = new TG18_tgButton_Text_Property(__self, __selector1);
            var temp2 = new global::Fuse.Reactive.Data("name");
            var temp3 = new global::Fuse.Reactive.Data("colorPalette");
            var temp4 = new global::Fuse.Reactive.Member(temp3, "mdBlack");
            __self_TextColor_inst = new TG18_tgButton_TextColor_Property(__self, __selector2);
            var temp5 = new global::Fuse.Reactive.Member(temp4, "code");
            var temp6 = new global::Fuse.Gestures.Clicked();
            var temp7 = new global::Fuse.Reactive.DataBinding(temp_Target_inst, temp1, __g_nametable, Fuse.Reactive.BindingMode.Default);
            var temp8 = new global::Fuse.Reactive.DataBinding(__self_Text_inst, temp2, __g_nametable, Fuse.Reactive.BindingMode.Default);
            var temp9 = new global::Fuse.Reactive.DataBinding(__self_TextColor_inst, temp5, __g_nametable, Fuse.Reactive.BindingMode.Default);
>>>>>>> 10b490d17f581411dec90f73b2587559addec886
            __self.Aspect = 3f;
            __self.Width = new Uno.UX.Size(100f, Uno.UX.Unit.Percent);
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
    [Uno.Compiler.UxGenerated]
    public partial class Template1: Uno.UX.Template
    {
        [Uno.WeakReference] internal readonly homePage __parent;
        [Uno.WeakReference] internal readonly homePage __parentInstance;
        public Template1(homePage parent, homePage parentInstance): base(null, false)
        {
            __parent = parent;
            __parentInstance = parentInstance;
        }
        static Template1()
        {
        }
        public override object New()
        {
            var __self = new global::tg.Separator();
            return __self;
        }
>>>>>>> 10b490d17f581411dec90f73b2587559addec886
    }
    global::Uno.UX.Property<object> temp_Items_inst;
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
        var temp = new global::Fuse.Reactive.Each();
        temp_Items_inst = new TG18_FuseReactiveEach_Items_Property(temp, __selector0);
        var temp1 = new global::Fuse.Reactive.Data("pagesArray");
        var temp2 = new global::Fuse.Reactive.JavaScript(__g_nametable);
<<<<<<< HEAD
        var temp3 = new global::Fuse.Controls.StackPanel();
        var temp4 = new Template(this, this);
        var temp5 = new global::Fuse.Reactive.DataBinding(temp_Items_inst, temp1, __g_nametable, Fuse.Reactive.BindingMode.Default);
=======
        var temp3 = new global::Fuse.Navigation.Activated();
        var temp4 = new global::Fuse.Reactive.JavaScript(__g_nametable);
        var temp5 = new global::Fuse.Controls.StackPanel();
        var temp6 = new Template(this, this);
        var temp7 = new Template1(this, this);
        var temp8 = new global::Fuse.Reactive.DataBinding(temp_Items_inst, temp1, __g_nametable, Fuse.Reactive.BindingMode.Default);
>>>>>>> 10b490d17f581411dec90f73b2587559addec886
        this.Name = __selector1;
        temp2.LineNumber = 2;
        temp2.FileName = "Pages/homePage.ux";
        temp2.File = new global::Uno.UX.BundleFileSource(import global::Uno.IO.BundleFile("../../../Pages/homePage.js"));
<<<<<<< HEAD
        temp3.Children.Add(temp);
        temp.Offset = 0;
        temp.Templates.Add(temp4);
        temp.Bindings.Add(temp5);
        __g_nametable.This = this;
        this.Children.Add(temp2);
        this.Children.Add(temp3);
=======
        temp3.Nodes.Add(temp4);
        temp4.Code = "\n\t\t\tvar helperFunctions = require(\"../Assets/JavaScript/helperFunctions\");\n\t\t\thelperFunctions.changeActivePage(\"homePage\");\n\t\t";
        temp4.LineNumber = 5;
        temp4.FileName = "Pages/homePage.ux";
        temp5.Children.Add(temp);
        temp.Offset = 1;
        temp.Templates.Add(temp6);
        temp.Templates.Add(temp7);
        temp.Bindings.Add(temp8);
        __g_nametable.This = this;
        this.Children.Add(temp2);
        this.Children.Add(temp3);
        this.Children.Add(temp5);
>>>>>>> 10b490d17f581411dec90f73b2587559addec886
    }
    static global::Uno.UX.Selector __selector0 = "Items";
    static global::Uno.UX.Selector __selector1 = "homePage";
}
