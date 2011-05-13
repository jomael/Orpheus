object Form1: TForm1
  Left = 417
  Top = 147
  ActiveControl = Calculator
  Caption = 'Calculator Example'
  ClientHeight = 352
  ClientWidth = 332
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -13
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = True
  Position = poScreenCenter
  PixelsPerInch = 96
  TextHeight = 16
  object Panel1: TPanel
    Left = 0
    Top = 0
    Width = 332
    Height = 227
    Align = alClient
    Caption = 'Panel1'
    TabOrder = 0
    object Calculator: TOvcCalculator
      Left = 1
      Top = 1
      Width = 330
      Height = 225
      Cursor = crArrow
      Align = alClient
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -11
      Font.Name = 'MS Sans Serif'
      Font.Style = [fsBold]
      TapeFont.Charset = DEFAULT_CHARSET
      TapeFont.Color = clWindowText
      TapeFont.Height = -13
      TapeFont.Name = 'Courier New'
      TapeFont.Style = [fsBold]
      Colors.ColorScheme = cscalcCustom
      Colors.DisabledMemoryButtons = clGray
      Colors.Display = clWindow
      Colors.DisplayTextColor = clWindowText
      Colors.EditButtons = clMaroon
      Colors.FunctionButtons = clNavy
      Colors.MemoryButtons = clRed
      Colors.NumberButtons = clBlue
      Colors.OperatorButtons = clRed
      Decimals = 2
      TapeHeight = 75
      ParentFont = False
      TabOrder = 0
      OnButtonPressed = CalculatorButtonPressed
    end
  end
  object Panel2: TPanel
    Left = 0
    Top = 227
    Width = 332
    Height = 125
    Align = alBottom
    TabOrder = 1
    object Label1: TLabel
      Left = 136
      Top = 8
      Width = 44
      Height = 16
      Caption = 'Result: '
    end
    object ResultLbl: TLabel
      Left = 184
      Top = 8
      Width = 7
      Height = 16
      Caption = '0'
    end
    object PrintSpeedButton: TSpeedButton
      Left = 240
      Top = 6
      Width = 83
      Height = 25
      Caption = '&Print'
      OnClick = PrintSpeedButtonClick
    end
    object SeparatePercentSpeedButton: TSpeedButton
      Left = 240
      Top = 48
      Width = 83
      Height = 25
      Caption = 'Separate %'
    end
    object OrNumberEdit1: TOvcNumberEdit
      Left = 8
      Top = 80
      Width = 113
      Height = 24
      AllowIncDec = False
      ButtonGlyph.Data = {
        A6000000424DA600000000000000760000002800000009000000060000000100
        0400000000003000000000000000000000001000000010000000000000000000
        80000080000000808000800000008000800080800000C0C0C000808080000000
        FF0000FF000000FFFF00FF000000FF00FF00FFFF0000FFFFFF00FFFFFFFFF000
        0000FFFF0FFFF0000000FFF000FFF0000000FF00000FF0000000F0000000F000
        0000FFFFFFFFF0000000}
      PopupAnchor = paLeft
      PopupColors.ColorScheme = cscalcCustom
      PopupColors.DisabledMemoryButtons = clGray
      PopupColors.Display = clWindow
      PopupColors.DisplayTextColor = clWindowText
      PopupColors.EditButtons = clMaroon
      PopupColors.FunctionButtons = clNavy
      PopupColors.MemoryButtons = clRed
      PopupColors.NumberButtons = clBlue
      PopupColors.OperatorButtons = clRed
      PopupDecimals = 2
      PopupFont.Charset = DEFAULT_CHARSET
      PopupFont.Color = clWindowText
      PopupFont.Height = -11
      PopupFont.Name = 'MS Sans Serif'
      PopupFont.Style = [fsBold]
      PopupHeight = 140
      PopupWidth = 200
      ReadOnly = False
      ShowButton = True
      TabOrder = 0
    end
    object DecimalRadioGroup: TRadioGroup
      Left = 8
      Top = 6
      Width = 113
      Height = 59
      Caption = 'Decimals'
      Columns = 2
      ItemIndex = 2
      Items.Strings = (
        'Float'
        '1'
        '2'
        '3')
      TabOrder = 1
      OnClick = DecimalRadioGroupClick
    end
    object cbFixedEntry: TCheckBox
      Left = 136
      Top = 32
      Width = 81
      Height = 17
      Caption = 'Fixed Entry'
      TabOrder = 2
      OnClick = cbFixedEntryClick
    end
    object Button1: TButton
      Left = 238
      Top = 88
      Width = 85
      Height = 25
      Caption = 'Exit'
      TabOrder = 4
      OnClick = Button1Click
    end
    object cbShowTape: TCheckBox
      Left = 136
      Top = 48
      Width = 81
      Height = 17
      Caption = 'Show tape'
      TabOrder = 3
      OnClick = cbShowTapeClick
    end
    object cbSeparate: TCheckBox
      Left = 136
      Top = 64
      Width = 89
      Height = 17
      Caption = 'Separate %'
      TabOrder = 5
      OnClick = cbSeparateClick
    end
  end
  object OrController1: TOvcController
    EntryCommands.TableList = (
      'Default'
      True
      ()
      'WordStar'
      False
      ()
      'Grid'
      False
      ())
    Epoch = 1900
  end
end
