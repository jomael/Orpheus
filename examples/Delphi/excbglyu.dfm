object Form1: TForm1
  Left = 223
  Top = 116
  Caption = 'Check List Box Example'
  ClientHeight = 183
  ClientWidth = 312
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -13
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = True
  Position = poScreenCenter
  OnClose = FormClose
  OnCreate = FormCreate
  PixelsPerInch = 96
  TextHeight = 16
  object OvcCheckList1: TOvcCheckList
    Left = 8
    Top = 8
    Width = 97
    Height = 163
    CheckColor = clWindowText
    Glyphs = ImageList1
    ShowGlyphs = True
    ThreeState = True
    WantDblClicks = False
    Controller = OvcController1
    Items.Strings = (
      'Plus'
      'Text'
      'Minus'
      'Open'
      'Close')
    TabOrder = 0
  end
  object Memo1: TMemo
    Left = 119
    Top = 8
    Width = 182
    Height = 73
    Lines.Strings = (
      ' This example shows how to '
      ' load and display glyphs with '
      ' the TOvcCheckList.')
    ReadOnly = True
    TabOrder = 1
  end
  object OvcController1: TOvcController
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
  object ImageList1: TImageList
    Left = 128
    Top = 96
  end
end
