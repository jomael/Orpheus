object AddrForm: TAddrForm
  Left = 259
  Top = 231
  Caption = 'Address Book Demo'
  ClientHeight = 387
  ClientWidth = 463
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  Menu = MainMenu1
  OldCreateOrder = True
  Position = poScreenCenter
  OnCreate = FormCreate
  OnDestroy = FormDestroy
  OnResize = FormResize
  PixelsPerInch = 96
  TextHeight = 13
  object OvcNotebook1: TOvcNotebook
    Left = 0
    Top = 33
    Width = 463
    Height = 333
    ActiveTabFont.Charset = DEFAULT_CHARSET
    ActiveTabFont.Color = clBlack
    ActiveTabFont.Height = -13
    ActiveTabFont.Name = 'Arial'
    ActiveTabFont.Style = [fsBold]
    TabOrientation = toRight
    OnPageChange = OvcNotebook1PageChange
    OnPageChanged = OvcNotebook1PageChanged
    Align = alClient
    Controller = OvcController1
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clBlack
    Font.Height = -13
    Font.Name = 'Arial'
    Font.Style = []
    ParentFont = False
    TabOrder = 0
    object TOvcTabPage
      Caption = '&Directory'
      object OvcVirtualListbox1: TOvcVirtualListBox
        Left = 26
        Top = 26
        Width = 385
        Height = 214
        Hint = 'Listing of records'
        Header = 'Last Name, First Name (Company)'
        HeaderColor.BackColor = clBtnFace
        HeaderColor.TextColor = clBtnText
        ProtectColor.BackColor = clRed
        ProtectColor.TextColor = clWhite
        RowHeight = 15
        SelectColor.BackColor = clHighlight
        SelectColor.TextColor = clHighlightText
        ShowHeader = True
        OnGetItem = OvcVirtualListbox1GetItem
        Controller = OvcController1
        Ctl3D = True
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clBlack
        Font.Height = -12
        Font.Name = 'Arial'
        Font.Style = []
        ParentCtl3D = False
        ParentFont = False
        TabOrder = 0
        OnDblClick = Modify1Click
      end
    end
    object TOvcTabPage
      Caption = '&Client Info'
      object GroupBox1: TGroupBox
        Left = 26
        Top = 24
        Width = 385
        Height = 173
        Caption = 'Name and Address'
        Ctl3D = True
        ParentCtl3D = False
        TabOrder = 0
        object Label1: TLabel
          Left = 12
          Top = 59
          Width = 24
          Height = 14
          Caption = 'Last:'
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clNavy
          Font.Height = -11
          Font.Name = 'Arial'
          Font.Style = []
          ParentFont = False
        end
        object TLabel
          Left = 208
          Top = 58
          Width = 24
          Height = 14
          Caption = 'First:'
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clNavy
          Font.Height = -11
          Font.Name = 'Arial'
          Font.Style = []
          ParentFont = False
        end
        object TLabel
          Left = 12
          Top = 88
          Width = 48
          Height = 14
          Caption = 'Company:'
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clNavy
          Font.Height = -11
          Font.Name = 'Arial'
          Font.Style = []
          ParentFont = False
        end
        object TLabel
          Left = 12
          Top = 114
          Width = 32
          Height = 14
          Caption = 'Street:'
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clNavy
          Font.Height = -11
          Font.Name = 'Arial'
          Font.Style = []
          ParentFont = False
        end
        object TLabel
          Left = 12
          Top = 142
          Width = 21
          Height = 14
          Caption = 'City:'
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clNavy
          Font.Height = -11
          Font.Name = 'Arial'
          Font.Style = []
          ParentFont = False
        end
        object TLabel
          Left = 192
          Top = 143
          Width = 28
          Height = 14
          Caption = 'State:'
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clNavy
          Font.Height = -11
          Font.Name = 'Arial'
          Font.Style = []
          ParentFont = False
        end
        object TLabel
          Left = 274
          Top = 143
          Width = 18
          Height = 14
          Caption = 'Zip:'
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clNavy
          Font.Height = -11
          Font.Name = 'Arial'
          Font.Style = []
          ParentFont = False
        end
        object LastNameField: TOvcSimpleField
          Left = 64
          Top = 56
          Width = 122
          Height = 23
          Cursor = crIBeam
          Hint = '|Enter Last Name'
          DataType = sftString
          CaretOvr.Shape = csBlock
          ControlCharColor = clRed
          Controller = OvcController1
          DecimalPlaces = 0
          EFColors.Disabled.BackColor = clWindow
          EFColors.Disabled.TextColor = clGrayText
          EFColors.Error.BackColor = clYellow
          EFColors.Error.TextColor = clBlack
          EFColors.Highlight.BackColor = clHighlight
          EFColors.Highlight.TextColor = clHighlightText
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -12
          Font.Name = 'Arial'
          Font.Style = []
          Options = [efoInputRequired, efoSoftValidation]
          ParentFont = False
          PictureMask = 'X'
          TabOrder = 1
        end
        object FirstNameField: TOvcSimpleField
          Left = 248
          Top = 56
          Width = 129
          Height = 23
          Cursor = crIBeam
          Hint = '|Enter First Name'
          DataType = sftString
          CaretOvr.Shape = csBlock
          ControlCharColor = clRed
          Controller = OvcController1
          DecimalPlaces = 0
          EFColors.Disabled.BackColor = clWindow
          EFColors.Disabled.TextColor = clGrayText
          EFColors.Error.BackColor = clRed
          EFColors.Error.TextColor = clBlack
          EFColors.Highlight.BackColor = clHighlight
          EFColors.Highlight.TextColor = clHighlightText
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -12
          Font.Name = 'Arial'
          Font.Style = []
          Options = [efoInputRequired, efoSoftValidation]
          ParentFont = False
          PictureMask = 'X'
          TabOrder = 2
        end
        object CompanyField: TOvcSimpleField
          Left = 64
          Top = 84
          Width = 313
          Height = 23
          Cursor = crIBeam
          Hint = '|Enter Company Name'
          DataType = sftString
          CaretOvr.Shape = csBlock
          ControlCharColor = clRed
          Controller = OvcController1
          DecimalPlaces = 0
          EFColors.Disabled.BackColor = clWindow
          EFColors.Disabled.TextColor = clGrayText
          EFColors.Error.BackColor = clRed
          EFColors.Error.TextColor = clBlack
          EFColors.Highlight.BackColor = clHighlight
          EFColors.Highlight.TextColor = clHighlightText
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -12
          Font.Name = 'Arial'
          Font.Style = []
          MaxLength = 30
          ParentFont = False
          PictureMask = 'X'
          TabOrder = 3
        end
        object StreetField: TOvcSimpleField
          Left = 64
          Top = 112
          Width = 313
          Height = 23
          Cursor = crIBeam
          Hint = '|Enter Street Address'
          DataType = sftString
          CaretOvr.Shape = csBlock
          ControlCharColor = clRed
          Controller = OvcController1
          DecimalPlaces = 0
          EFColors.Disabled.BackColor = clWindow
          EFColors.Disabled.TextColor = clGrayText
          EFColors.Error.BackColor = clRed
          EFColors.Error.TextColor = clBlack
          EFColors.Highlight.BackColor = clHighlight
          EFColors.Highlight.TextColor = clHighlightText
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -12
          Font.Name = 'Arial'
          Font.Style = []
          MaxLength = 30
          ParentFont = False
          PictureMask = 'X'
          TabOrder = 4
        end
        object CityField: TOvcSimpleField
          Left = 64
          Top = 140
          Width = 122
          Height = 23
          Cursor = crIBeam
          Hint = '|Enter City'
          DataType = sftString
          CaretOvr.Shape = csBlock
          ControlCharColor = clRed
          Controller = OvcController1
          DecimalPlaces = 0
          EFColors.Disabled.BackColor = clWindow
          EFColors.Disabled.TextColor = clGrayText
          EFColors.Error.BackColor = clRed
          EFColors.Error.TextColor = clBlack
          EFColors.Highlight.BackColor = clHighlight
          EFColors.Highlight.TextColor = clHighlightText
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -12
          Font.Name = 'Arial'
          Font.Style = []
          ParentFont = False
          PictureMask = 'X'
          TabOrder = 5
        end
        object StateField: TOvcSimpleField
          Left = 225
          Top = 140
          Width = 26
          Height = 23
          Cursor = crIBeam
          Hint = '|Enter Two-Letter State Abbreviation'
          DataType = sftString
          CaretOvr.Shape = csBlock
          ControlCharColor = clRed
          Controller = OvcController2
          DecimalPlaces = 0
          EFColors.Disabled.BackColor = clWindow
          EFColors.Disabled.TextColor = clGrayText
          EFColors.Error.BackColor = clRed
          EFColors.Error.TextColor = clBlack
          EFColors.Highlight.BackColor = clHighlight
          EFColors.Highlight.TextColor = clHighlightText
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -12
          Font.Name = 'Arial'
          Font.Style = []
          MaxLength = 2
          ParentFont = False
          PictureMask = 'A'
          TabOrder = 6
          OnError = StateFieldError
          OnUserCommand = StateFieldUserCommand
          OnUserValidation = StateFieldUserValidation
        end
        object ZipField: TOvcPictureField
          Left = 298
          Top = 140
          Width = 79
          Height = 23
          Cursor = crIBeam
          Hint = '|Enter Zip Code'
          DataType = pftString
          CaretOvr.Shape = csBlock
          Controller = OvcController1
          ControlCharColor = clRed
          DecimalPlaces = 0
          EFColors.Disabled.BackColor = clWindow
          EFColors.Disabled.TextColor = clGrayText
          EFColors.Error.BackColor = clRed
          EFColors.Error.TextColor = clBlack
          EFColors.Highlight.BackColor = clHighlight
          EFColors.Highlight.TextColor = clHighlightText
          Epoch = 1900
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -12
          Font.Name = 'Arial'
          Font.Style = []
          InitDateTime = False
          MaxLength = 10
          Options = [efoCaretToEnd]
          ParentFont = False
          PictureMask = '99999-9999'
          TabOrder = 7
          OnExit = PictureFieldExit
          OnUserValidation = ZipFieldUserValidation
        end
        object OvcSpinner1: TOvcSpinner
          Left = 251
          Top = 140
          Width = 16
          Height = 24
          AutoRepeat = True
          Delta = 1.000000000000000000
          FocusedControl = StateField
          OnClick = OvcSpinner1Click
        end
        object FlexEdit1: TO32FlexEdit
          Left = 8
          Top = 24
          Width = 369
          Height = 24
          TabStop = False
          Borders.Active = True
          Borders.BorderSet.ShowLeft = False
          Borders.BorderSet.ShowRight = False
          Borders.BorderSet.ShowTop = False
          Borders.BorderStyle = bstyFlat
          Borders.FlatColor = clMaroon
          Color = clBtnFace
          EfColors.Disabled.BackColor = clWindow
          EfColors.Disabled.TextColor = clGrayText
          EfColors.Error.BackColor = clRed
          EfColors.Error.TextColor = clBlack
          EfColors.Highlight.BackColor = clHighlight
          EfColors.Highlight.TextColor = clHighlightText
          ReadOnly = True
          TabOrder = 0
          Validation.BeepOnError = True
          Validation.SoftValidation = False
          Validation.ValidationEvent = veOnExit
          Validation.ValidatorType = 'None'
          Validation.ValidationType = vtNone
          Validation.InputRequired = False
          WantReturns = True
        end
      end
      object GroupBox2: TGroupBox
        Left = 26
        Top = 201
        Width = 188
        Height = 105
        Caption = 'Phone Numbers'
        Ctl3D = True
        ParentCtl3D = False
        TabOrder = 1
        object TLabel
          Left = 12
          Top = 36
          Width = 30
          Height = 14
          Caption = 'Home:'
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clNavy
          Font.Height = -11
          Font.Name = 'Arial'
          Font.Style = []
          ParentFont = False
        end
        object TLabel
          Left = 12
          Top = 74
          Width = 45
          Height = 14
          AutoSize = False
          Caption = ' Work:'
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clNavy
          Font.Height = -11
          Font.Name = 'Arial'
          Font.Style = []
          ParentFont = False
        end
        object HomePhoneField: TOvcPictureField
          Left = 76
          Top = 32
          Width = 93
          Height = 23
          Cursor = crIBeam
          Hint = '|Enter Home Phone Number'
          DataType = pftString
          CaretOvr.Shape = csBlock
          Controller = OvcController1
          ControlCharColor = clRed
          DecimalPlaces = 0
          EFColors.Disabled.BackColor = clWindow
          EFColors.Disabled.TextColor = clGrayText
          EFColors.Error.BackColor = clRed
          EFColors.Error.TextColor = clBlack
          EFColors.Highlight.BackColor = clHighlight
          EFColors.Highlight.TextColor = clHighlightText
          Epoch = 1900
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -12
          Font.Name = 'Arial'
          Font.Style = []
          InitDateTime = False
          MaxLength = 14
          Options = [efoCaretToEnd]
          ParentFont = False
          PictureMask = '(999) 999-9999'
          TabOrder = 0
          Uninitialized = True
          OnExit = PictureFieldExit
          OnUserValidation = PhoneFieldUserValidation
        end
        object WorkPhoneField: TOvcPictureField
          Left = 76
          Top = 72
          Width = 93
          Height = 23
          Cursor = crIBeam
          Hint = '|Enter Work Phone Number'
          DataType = pftString
          CaretOvr.Shape = csBlock
          Controller = OvcController1
          ControlCharColor = clRed
          DecimalPlaces = 0
          EFColors.Disabled.BackColor = clWindow
          EFColors.Disabled.TextColor = clGrayText
          EFColors.Error.BackColor = clRed
          EFColors.Error.TextColor = clBlack
          EFColors.Highlight.BackColor = clHighlight
          EFColors.Highlight.TextColor = clHighlightText
          Epoch = 1900
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -12
          Font.Name = 'Arial'
          Font.Style = []
          InitDateTime = False
          MaxLength = 14
          Options = [efoCaretToEnd]
          ParentFont = False
          PictureMask = '(999) 999-9999'
          TabOrder = 1
          Uninitialized = True
          OnExit = PictureFieldExit
          OnUserValidation = PhoneFieldUserValidation
        end
      end
      object GroupBox3: TGroupBox
        Left = 223
        Top = 201
        Width = 188
        Height = 105
        Caption = 'Important Dates'
        Ctl3D = True
        ParentCtl3D = False
        TabOrder = 2
        object TLabel
          Left = 13
          Top = 35
          Width = 43
          Height = 14
          Caption = 'Birthday:'
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clNavy
          Font.Height = -11
          Font.Name = 'Arial'
          Font.Style = []
          ParentFont = False
        end
        object TLabel
          Left = 13
          Top = 75
          Width = 63
          Height = 14
          Caption = 'Anniversary:'
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clNavy
          Font.Height = -11
          Font.Name = 'Arial'
          Font.Style = []
          ParentFont = False
        end
        object BirthdayField: TOvcPictureField
          Left = 81
          Top = 32
          Width = 73
          Height = 23
          Cursor = crIBeam
          Hint = '|Enter Birthdate'
          DataType = pftDate
          CaretOvr.Shape = csBlock
          Controller = OvcController1
          ControlCharColor = clRed
          DecimalPlaces = 0
          EFColors.Disabled.BackColor = clWindow
          EFColors.Disabled.TextColor = clGrayText
          EFColors.Error.BackColor = clRed
          EFColors.Error.TextColor = clBlack
          EFColors.Highlight.BackColor = clHighlight
          EFColors.Highlight.TextColor = clHighlightText
          Epoch = 1900
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -12
          Font.Name = 'Arial'
          Font.Style = []
          InitDateTime = False
          MaxLength = 10
          Options = [efoCaretToEnd]
          ParentFont = False
          PictureMask = 'MM/DD/yyyy'
          TabOrder = 0
          OnDblClick = PopupCalendar
          OnExit = PictureFieldExit
          OnUserCommand = DisplayCalendar
          RangeHigh = {25600D00000000000000}
          RangeLow = {00000000000000000000}
        end
        object AnniversaryField: TOvcPictureField
          Left = 81
          Top = 72
          Width = 73
          Height = 23
          Cursor = crIBeam
          Hint = '|Enter Anniversary Date'
          DataType = pftDate
          CaretOvr.Shape = csBlock
          Controller = OvcController1
          ControlCharColor = clRed
          DecimalPlaces = 0
          EFColors.Disabled.BackColor = clWindow
          EFColors.Disabled.TextColor = clGrayText
          EFColors.Error.BackColor = clRed
          EFColors.Error.TextColor = clBlack
          EFColors.Highlight.BackColor = clHighlight
          EFColors.Highlight.TextColor = clHighlightText
          Epoch = 1900
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -12
          Font.Name = 'Arial'
          Font.Style = []
          InitDateTime = False
          MaxLength = 10
          Options = [efoCaretToEnd]
          ParentFont = False
          PictureMask = 'MM/DD/yyyy'
          TabOrder = 1
          OnDblClick = PopupCalendar
          OnExit = PictureFieldExit
          OnUserCommand = DisplayCalendar
          RangeHigh = {25600D00000000000000}
          RangeLow = {00000000000000000000}
        end
        object OvcFourWaySpinner1: TOvcSpinner
          Left = 154
          Top = 32
          Width = 24
          Height = 24
          AutoRepeat = True
          Delta = 1.000000000000000000
          FocusedControl = BirthdayField
          Style = stFourWay
        end
        object OvcFourWaySpinner2: TOvcSpinner
          Left = 154
          Top = 72
          Width = 24
          Height = 24
          AutoRepeat = True
          Delta = 1.000000000000000000
          FocusedControl = AnniversaryField
          Style = stFourWay
        end
      end
    end
    object TOvcTabPage
      Caption = '&Notes'
      object Label2: TLabel
        Left = 58
        Top = 18
        Width = 321
        Height = 16
        Alignment = taCenter
        AutoSize = False
        Caption = 'Memo for:'
      end
      object OvcEditor1: TOvcEditor
        Left = 30
        Top = 51
        Width = 377
        Height = 202
        ByteLimit = 255
        CaretOvr.Shape = csBlock
        FixedFont.Color = clBlack
        FixedFont.Name = 'Courier New'
        FixedFont.Size = 10
        FixedFont.Style = []
        HighlightColors.BackColor = clHighlight
        HighlightColors.TextColor = clHighlightText
        LeftMargin = 15
        MarginOptions.Right.LinePosition = 5
        MarginOptions.Left.LinePosition = 15
        RightMargin = 5
        ScrollBars = ssNone
        WordWrap = True
        Controller = OvcController1
        Ctl3D = False
        ParentCtl3D = False
        TabOrder = 0
        TabStop = True
      end
    end
  end
  object Panel1: TPanel
    Left = 0
    Top = 366
    Width = 463
    Height = 21
    Align = alBottom
    Alignment = taLeftJustify
    BevelInner = bvLowered
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clBlack
    Font.Height = -13
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentFont = False
    TabOrder = 1
  end
  object Panel2: TPanel
    Left = 0
    Top = 0
    Width = 463
    Height = 33
    Align = alTop
    ParentShowHint = False
    ShowHint = True
    TabOrder = 2
    object ExitButton: TSpeedButton
      Left = 5
      Top = 4
      Width = 25
      Height = 25
      Hint = 'Exit|Exit Application'
      Glyph.Data = {
        76010000424D7601000000000000760000002800000020000000100000000100
        0400000000000001000000000000000000001000000010000000000000000000
        800000800000008080008000000080008000808000007F7F7F00BFBFBF000000
        FF0000FF000000FFFF00FF000000FF00FF00FFFF0000FFFFFF00330000000000
        03333377777777777F333301BBBBBBBB033333773F3333337F3333011BBBBBBB
        0333337F73F333337F33330111BBBBBB0333337F373F33337F333301110BBBBB
        0333337F337F33337F333301110BBBBB0333337F337F33337F333301110BBBBB
        0333337F337F33337F333301110BBBBB0333337F337F33337F333301110BBBBB
        0333337F337F33337F333301110BBBBB0333337F337FF3337F33330111B0BBBB
        0333337F337733337F333301110BBBBB0333337F337F33337F333301110BBBBB
        0333337F3F7F33337F333301E10BBBBB0333337F7F7F33337F333301EE0BBBBB
        0333337F777FFFFF7F3333000000000003333377777777777333}
      NumGlyphs = 2
      OnClick = Exit1Click
    end
    object InsButton: TSpeedButton
      Left = 35
      Top = 4
      Width = 25
      Height = 25
      Hint = 'Insert|Insert Record'
      Glyph.Data = {
        76010000424D7601000000000000760000002800000020000000100000000100
        0400000000000001000000000000000000001000000010000000000000000000
        800000800000008080008000000080008000808000007F7F7F00BFBFBF000000
        FF0000FF000000FFFF00FF000000FF00FF00FFFF0000FFFFFF00333333333333
        33333333FF33333333FF333993333333300033377F3333333777333993333333
        300033F77FFF3333377739999993333333333777777F3333333F399999933333
        33003777777333333377333993333333330033377F3333333377333993333333
        3333333773333333333F333333333333330033333333F33333773333333C3333
        330033333337FF3333773333333CC333333333FFFFF77FFF3FF33CCCCCCCCCC3
        993337777777777F77F33CCCCCCCCCC3993337777777777377333333333CC333
        333333333337733333FF3333333C333330003333333733333777333333333333
        3000333333333333377733333333333333333333333333333333}
      NumGlyphs = 2
      OnClick = Insert1Click
    end
    object DelButton: TSpeedButton
      Left = 59
      Top = 4
      Width = 25
      Height = 25
      Hint = 'Delete|Delete Record'
      Glyph.Data = {
        76010000424D7601000000000000760000002800000020000000100000000100
        0400000000000001000000000000000000001000000010000000000000000000
        800000800000008080008000000080008000808000007F7F7F00BFBFBF000000
        FF0000FF000000FFFF00FF000000FF00FF00FFFF0000FFFFFF00333333333333
        333333333333333333FF33333333333330003333333333333777333333333333
        300033FFFFFF3333377739999993333333333777777F3333333F399999933333
        3300377777733333337733333333333333003333333333333377333333333333
        3333333333333333333F333333333333330033333F33333333773333C3333333
        330033337F3333333377333CC3333333333333F77FFFFFFF3FF33CCCCCCCCCC3
        993337777777777F77F33CCCCCCCCCC399333777777777737733333CC3333333
        333333377F33333333FF3333C333333330003333733333333777333333333333
        3000333333333333377733333333333333333333333333333333}
      NumGlyphs = 2
      OnClick = Delete1Click
    end
    object FirstButton: TSpeedButton
      Left = 90
      Top = 4
      Width = 25
      Height = 25
      Hint = 'First Record|Goto First Record'
      Glyph.Data = {
        76010000424D7601000000000000760000002800000020000000100000000100
        0400000000000001000000000000000000001000000010000000000000000000
        80000080000000808000800000008000800080800000C0C0C000808080000000
        FF0000FF000000FFFF00FF000000FF00FF00FFFF0000FFFFFF00333333333333
        33333333333333333333333333333333333333333333333F3333333333333303
        333333333F33338F3333333303333003333333338F33388F3333333303330003
        333333338F33838F3333333303300003333333338F38338F3333333303000003
        333333338F83338F33333333000000033333333388F3338F3333333300000003
        3333333388F3338F3333333303000003333333338F8F338F3333333303300003
        333333338F38F38F3333333303330003333333338F338F8F3333333303333003
        333333338333388F333333333333330333333333333333833333333333333333
        3333333333333333333333333333333333333333333333333333}
      NumGlyphs = 2
      OnClick = FirstButtonClick
    end
    object PrevButton: TSpeedButton
      Left = 114
      Top = 4
      Width = 25
      Height = 25
      Hint = 'Previous Record|Goto Previous Record'
      Glyph.Data = {
        76010000424D7601000000000000760000002800000020000000100000000100
        0400000000000001000000000000000000001000000010000000000000000000
        80000080000000808000800000008000800080800000C0C0C000808080000000
        FF0000FF000000FFFF00FF000000FF00FF00FFFF0000FFFFFF00333333333333
        33333333333333333333333333333333333333333333333F3333333333333303
        333333333333338F3333333333333003333333333333388F3333333333330003
        333333333333838F3333333333300003333333333338338F3333333333000003
        333333333383338F33333333300000033333333338F3338F3333333330000003
        3333333338F3338F333333333300000333333333338F338F3333333333300003
        333333333338F38F33333333333300033333333333338F8F3333333333333003
        333333333333388F333333333333330333333333333333833333333333333333
        3333333333333333333333333333333333333333333333333333}
      NumGlyphs = 2
      OnClick = PrevButtonClick
    end
    object NextButton: TSpeedButton
      Left = 138
      Top = 4
      Width = 25
      Height = 25
      Hint = 'Next Record|Goto Next Record'
      Glyph.Data = {
        76010000424D7601000000000000760000002800000020000000100000000100
        0400000000000001000000000000000000001000000010000000000000000000
        80000080000000808000800000008000800080800000C0C0C000808080000000
        FF0000FF000000FFFF00FF000000FF00FF00FFFF0000FFFFFF00333333333333
        3333333333333333333333333333333333333333333333333333333330333333
        3333333338F33333333333333003333333333333388F33333333333330003333
        3333333338F8F33333333333300003333333333338F38F333333333330000033
        3333333338F338F333333333300000033333333338F3338F3333333330000003
        3333333338F3338333333333300000333333333338F338333333333330000333
        3333333338F3833333333333300033333333333338F833333333333330033333
        3333333338833333333333333033333333333333383333333333333333333333
        3333333333333333333333333333333333333333333333333333}
      NumGlyphs = 2
      OnClick = NextButtonClick
    end
    object HelpButton: TSpeedButton
      Left = 191
      Top = 4
      Width = 25
      Height = 25
      Hint = 'Help|Show About Box'
      Glyph.Data = {
        76010000424D7601000000000000760000002800000020000000100000000100
        0400000000000001000000000000000000001000000010000000000000000000
        800000800000008080008000000080008000808000007F7F7F00BFBFBF000000
        FF0000FF000000FFFF00FF000000FF00FF00FFFF0000FFFFFF00333333333333
        3333333333FFFFF3333333333F797F3333333333F737373FF333333BFB999BFB
        33333337737773773F3333BFBF797FBFB33333733337333373F33BFBFBFBFBFB
        FB3337F33333F33337F33FBFBFB9BFBFBF3337333337F333373FFBFBFBF97BFB
        FBF37F333337FF33337FBFBFBFB99FBFBFB37F3333377FF3337FFBFBFBFB99FB
        FBF37F33333377FF337FBFBF77BF799FBFB37F333FF3377F337FFBFB99FB799B
        FBF373F377F3377F33733FBF997F799FBF3337F377FFF77337F33BFBF99999FB
        FB33373F37777733373333BFBF999FBFB3333373FF77733F7333333BFBFBFBFB
        3333333773FFFF77333333333FBFBF3333333333377777333333}
      NumGlyphs = 2
      OnClick = About1Click
    end
    object LastButton: TSpeedButton
      Left = 162
      Top = 4
      Width = 25
      Height = 25
      Hint = 'Last Record|Goto Last Record'
      Glyph.Data = {
        76010000424D7601000000000000760000002800000020000000100000000100
        0400000000000001000000000000000000001000000010000000000000000000
        80000080000000808000800000008000800080800000C0C0C000808080000000
        FF0000FF000000FFFF00FF000000FF00FF00FFFF0000FFFFFF00333333333333
        3333333333333333333333333333333333333333333333333333333330333333
        3333333338F33333F33333333003333033333333388F3338F333333330003330
        3333333338F8F338F3333333300003303333333338F38F38F333333330000030
        3333333338F338F8F3333333300000003333333338F33388F333333330000000
        3333333338F33388F3333333300000303333333338F33838F333333330000330
        3333333338F38338F3333333300033303333333338F83338F333333330033330
        3333333338833338333333333033333333333333383333333333333333333333
        3333333333333333333333333333333333333333333333333333}
      NumGlyphs = 2
      OnClick = LastButtonClick
    end
  end
  object OvcController1: TOvcController
    EntryCommands.TableList = (
      'Default'
      True
      (
        113
        256))
    Epoch = 1900
    Left = 279
    Top = 3
  end
  object MainMenu1: TMainMenu
    Left = 310
    Top = 3
    object File1: TMenuItem
      Caption = '&File'
      object New1: TMenuItem
        Caption = '&New'
        OnClick = New1Click
      end
      object Open1: TMenuItem
        Caption = '&Open'
        OnClick = Open1Click
      end
      object N1: TMenuItem
        Caption = '-'
      end
      object Save1: TMenuItem
        Caption = '&Save'
        OnClick = Save1Click
      end
      object SaveAs1: TMenuItem
        Caption = 'Save &As'
        OnClick = SaveAs1Click
      end
      object N2: TMenuItem
        Caption = '-'
      end
      object Exit1: TMenuItem
        Caption = 'E&xit'
        OnClick = Exit1Click
      end
    end
    object Edit1: TMenuItem
      Caption = '&Edit'
      object Insert1: TMenuItem
        Caption = '&Insert Record'
        OnClick = Insert1Click
      end
      object Modify1: TMenuItem
        Caption = '&Modify Record'
        OnClick = Modify1Click
      end
      object Delete1: TMenuItem
        Caption = '&Delete Record'
        OnClick = Delete1Click
      end
    end
    object Help1: TMenuItem
      Caption = '&Help'
      object About1: TMenuItem
        Caption = '&About'
        OnClick = About1Click
      end
    end
  end
  object OvcTransfer1: TOvcTransfer
    Left = 341
    Top = 3
  end
  object OvcController2: TOvcController
    EntryCommands.TableList = (
      'Default'
      True
      (
        38
        256
        40
        257))
    Epoch = 1900
    Left = 372
    Top = 3
  end
  object OpenDialog1: TOpenDialog
    DefaultExt = 'ADR'
    Filter = 'Address Files|*.ADR'
    Options = [ofOverwritePrompt, ofHideReadOnly, ofPathMustExist, ofCreatePrompt]
    Title = 'Open Address Book'
    Left = 402
    Top = 3
  end
  object SaveDialog1: TSaveDialog
    DefaultExt = 'ADR'
    Filter = 'Address Files|*.ADR'
    Options = [ofOverwritePrompt, ofHideReadOnly, ofPathMustExist, ofCreatePrompt]
    Title = 'Save Address Book'
    Left = 432
    Top = 3
  end
end
